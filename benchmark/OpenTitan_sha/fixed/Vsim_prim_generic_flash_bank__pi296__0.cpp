// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 65536, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00010000U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x0000ffffU 
                                                                                & index)][0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x0000ffffU 
                                                                                & index)][1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x0000ffffU 
                                                                                & index)][2U] 
            = (0x00000fffU & val[2U]);
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hc1613866_0;

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00010000U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x0000ffffU & index)][0U];
        val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x0000ffffU & index)][1U];
        val[2U] = ((0xfffff000U & val[2U]) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                   [(0x0000ffffU & index)][2U]);
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 2560, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U] 
            = (0x00000fffU & val[2U]);
        if (VL_LIKELY(((0x09ffU >= (0x00000fffU & index))))) {
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U];
        }
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        if ((0x09ffU >= (0x00000fffU & index))) {
            val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][0U];
            val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][1U];
        } else {
            val[0U] = 0U;
            val[1U] = 0U;
        }
        val[2U] = ((0xfffff000U & val[2U]) | ((0x09ffU 
                                               >= (0x00000fffU 
                                                   & index))
                                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                                              [(0x00000fffU 
                                                & index)][2U]
                                               : 0U));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 2560, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U] 
            = (0x00000fffU & val[2U]);
        if (VL_LIKELY(((0x09ffU >= (0x00000fffU & index))))) {
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U];
        }
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        if ((0x09ffU >= (0x00000fffU & index))) {
            val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][0U];
            val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][1U];
        } else {
            val[0U] = 0U;
            val[1U] = 0U;
        }
        val[2U] = ((0xfffff000U & val[2U]) | ((0x09ffU 
                                               >= (0x00000fffU 
                                                   & index))
                                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                                              [(0x00000fffU 
                                                & index)][2U]
                                               : 0U));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 2560, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U] 
            = (0x00000fffU & val[2U]);
        if (VL_LIKELY(((0x09ffU >= (0x00000fffU & index))))) {
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U];
        }
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        if ((0x09ffU >= (0x00000fffU & index))) {
            val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][0U];
            val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][1U];
        } else {
            val[0U] = 0U;
            val[1U] = 0U;
        }
        val[2U] = ((0xfffff000U & val[2U]) | ((0x09ffU 
                                               >= (0x00000fffU 
                                                   & index))
                                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                                              [(0x00000fffU 
                                                & index)][2U]
                                               : 0U));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)VL_VALUEPLUSARGS_INI(1, "flash_rand_delay_en=%0b"s, 
                               vlSelfRef.__PVT__unnamedblk1__DOT__flash_rand_delay_en);
    if (vlSelfRef.__PVT__unnamedblk1__DOT__flash_rand_delay_en) {
        vlSelfRef.__PVT__ReadLatency = VL_URANDOM_RANGE_I(1U, 5U);
        vlSelfRef.__PVT__ProgLatency = VL_URANDOM_RANGE_I(0x00000019U, 0x00000032U);
        vlSelfRef.__PVT__EraseLatency = VL_URANDOM_RANGE_I(0x0000007dU, 0x000000c8U);
    }
    (void)VL_VALUEPLUSARGS_INI(32, "flash_read_latency=%0d"s, 
                               vlSelfRef.__PVT__ReadLatency);
    (void)VL_VALUEPLUSARGS_INI(32, "flash_program_latency=%0d"s, 
                               vlSelfRef.__PVT__ProgLatency);
    (void)VL_VALUEPLUSARGS_INI(32, "flash_erase_latency=%0d"s, 
                               vlSelfRef.__PVT__EraseLatency);
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[0].u_prim_flash_bank.u_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[0].u_prim_flash_bank.gen_info_types[0].u_info_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[0].u_prim_flash_bank.gen_info_types[1].u_info_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[0].u_prim_flash_bank.gen_info_types[2].u_info_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.part_i = (1U & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__host_req)) 
                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                 >> 5U)));
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__1(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h719ce750_0_1;
    __VdfgRegularize_h719ce750_0_1 = 0;
    // Body
    vlSelfRef.he_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
                      & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_he_en) 
                         | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_he_en)));
    vlSelfRef.erase_suspend_req_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_erase__DOT__suspend_valid));
    vlSelfRef.__PVT__index_cnt_inc = 0U;
    vlSelfRef.__PVT__index_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wdata[0U] = 0U;
    vlSelfRef.__PVT__mem_wdata[1U] = 0U;
    vlSelfRef.__PVT__mem_wdata[2U] = 0U;
    vlSelfRef.__PVT__time_cnt_inc = 0U;
    vlSelfRef.__PVT__time_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wr = 0U;
    vlSelfRef.__PVT__st_d = vlSelfRef.__PVT__st_q;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                    if (((vlSelfRef.__PVT__index_cnt 
                          < vlSelfRef.__PVT__index_limit_q) 
                         | (vlSelfRef.__PVT__time_cnt 
                            < vlSelfRef.__PVT__time_limit_q))) {
                        vlSelfRef.__PVT__index_cnt_inc 
                            = (vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q);
                        vlSelfRef.__PVT__mem_wdata[0U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[1U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[2U] = 0x00000fffU;
                        vlSelfRef.__PVT__time_cnt_inc 
                            = (vlSelfRef.__PVT__time_cnt 
                               < vlSelfRef.__PVT__time_limit_q);
                        vlSelfRef.__PVT__mem_wr = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__mem_wdata[0U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] 
                                                  & vlSelfRef.__PVT__rd_data_q[0U]);
                vlSelfRef.__PVT__mem_wdata[1U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] 
                                                  & vlSelfRef.__PVT__rd_data_q[1U]);
                vlSelfRef.__PVT__mem_wdata[2U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                  & vlSelfRef.__PVT__rd_data_q[2U]);
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ProgLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                    vlSelfRef.__PVT__mem_wr = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                vlSelfRef.__PVT__index_cnt_clr = 1U;
                vlSelfRef.__PVT__time_cnt_clr = 1U;
            }
            vlSelfRef.__PVT__st_d = 2U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q) 
                              | (vlSelfRef.__PVT__time_cnt 
                                 < vlSelfRef.__PVT__time_limit_q))))) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                    vlSelfRef.__PVT__time_cnt_clr = 1U;
                }
            }
            if (vlSelfRef.erase_suspend_req_i) {
                vlSelfRef.__PVT__st_d = 6U;
            } else if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                                  < vlSelfRef.__PVT__index_limit_q) 
                                 | (vlSelfRef.__PVT__time_cnt 
                                    < vlSelfRef.__PVT__time_limit_q))))) {
                vlSelfRef.__PVT__st_d = 2U;
            }
        } else if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
            vlSelfRef.__PVT__time_cnt_clr = 1U;
            vlSelfRef.__PVT__st_d = 2U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((0x00000064U > vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_inc = 1U;
                }
                if ((0x00000064U <= vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ReadLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                }
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if (vlSelfRef.__PVT__prog_pend_q) {
                        vlSelfRef.__PVT__time_cnt_clr = 1U;
                        vlSelfRef.__PVT__st_d = 4U;
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                            vlSelfRef.__PVT__time_cnt_clr = 1U;
                        }
                        vlSelfRef.__PVT__st_d = ((IData)(vlSelfRef.__PVT__rd_req)
                                                  ? 3U
                                                  : 2U);
                    }
                }
            } else if (vlSelfRef.__PVT__rd_req) {
                vlSelfRef.__PVT__time_cnt_inc = 1U;
                vlSelfRef.__PVT__st_d = 3U;
            } else if (vlSelfRef.__PVT__prog_req) {
                vlSelfRef.__PVT__st_d = 3U;
            } else if (vlSelfRef.__PVT__pg_erase_req) {
                vlSelfRef.__PVT__st_d = 5U;
            } else if (vlSelfRef.__PVT__bk_erase_req) {
                vlSelfRef.__PVT__st_d = 5U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            vlSelfRef.__PVT__st_d = ((0x00000064U > vlSelfRef.__PVT__index_cnt)
                                      ? 1U : 2U);
        } else if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
                    & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__fla_pdm_h)))) {
            vlSelfRef.__PVT__st_d = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni)) 
               | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__fla_pdm_h)))) {
        vlSelfRef.__PVT__st_d = 0U;
    }
    vlSelfRef.__PVT__pop_cmd = 0U;
    vlSelfRef.__PVT__mem_req = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.done_o = 1U;
            } else {
                vlSelfRef.done_o = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q) 
                              | (vlSelfRef.__PVT__time_cnt 
                                 < vlSelfRef.__PVT__time_limit_q))))) {
                    vlSelfRef.__PVT__pop_cmd = 1U;
                }
            }
            vlSelfRef.done_o = (1U & (~ ((IData)(vlSelfRef.erase_suspend_req_i) 
                                         | ((vlSelfRef.__PVT__index_cnt 
                                             < vlSelfRef.__PVT__index_limit_q) 
                                            | (vlSelfRef.__PVT__time_cnt 
                                               < vlSelfRef.__PVT__time_limit_q)))));
        } else {
            if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
                vlSelfRef.__PVT__pop_cmd = 1U;
            }
            vlSelfRef.done_o = (1U & ((vlSelfRef.__PVT__time_cnt 
                                       >= vlSelfRef.__PVT__ProgLatency) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                         >> 2U)));
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                    if (((vlSelfRef.__PVT__index_cnt 
                          < vlSelfRef.__PVT__index_limit_q) 
                         | (vlSelfRef.__PVT__time_cnt 
                            < vlSelfRef.__PVT__time_limit_q))) {
                        vlSelfRef.__PVT__mem_req = 1U;
                    }
                }
            } else if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ProgLatency)) {
                vlSelfRef.__PVT__mem_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_pend_q)))) {
                        if (vlSelfRef.__PVT__rd_req) {
                            vlSelfRef.__PVT__pop_cmd = 1U;
                            vlSelfRef.__PVT__mem_req = 1U;
                        }
                    }
                }
            } else if (vlSelfRef.__PVT__rd_req) {
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.__PVT__mem_req = 1U;
            } else if (vlSelfRef.__PVT__prog_req) {
                vlSelfRef.__PVT__mem_req = 1U;
            }
        }
        vlSelfRef.done_o = (1U & (((IData)(vlSelfRef.__PVT__st_q) 
                                   >> 1U) & ((~ ((vlSelfRef.__PVT__time_cnt 
                                                  < vlSelfRef.__PVT__ReadLatency) 
                                                 | (IData)(vlSelfRef.__PVT__prog_pend_q))) 
                                             & (IData)(vlSelfRef.__PVT__st_q))));
    }
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__pop_cmd)));
    vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(vlSelfRef.__PVT__mem_req) & (IData)(
                                                       (0x00004000U 
                                                        != 
                                                        (0x80004000U 
                                                         & vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U]))));
    vlSelfRef.__PVT__mem_rd_d = ((~ (IData)(vlSelfRef.__PVT__mem_wr)) 
                                 & (IData)(vlSelfRef.__PVT__mem_req));
    __VdfgRegularize_h719ce750_0_1 = ((IData)(vlSelfRef.__PVT__mem_req) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                         >> 0x0000000eU));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((0U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((2U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__2(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bk_erase_i = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__reqs) 
                             >> 2U) & (0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_erase__DOT__state_q)));
    vlSelfRef.pg_erase_i = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__reqs) 
                             >> 1U) & (0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_erase__DOT__state_q)));
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__3(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__req_i) 
                      & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__no_buf_en_change) 
                         & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20) 
                            & ((~ (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__buf_match))) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11)))));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelfRef.init_busy_o)) & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__flash_prog_req) 
                                                  | ((IData)(vlSelfRef.rd_i) 
                                                     | ((IData)(vlSelfRef.bk_erase_i) 
                                                        | (IData)(vlSelfRef.pg_erase_i))))) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim_prim_generic_flash_bank__pi296___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*75:0*/ __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*15:0*/ __VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*11:0*/ __VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*11:0*/ __VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*11:0*/ __VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    // Body
    __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    if (vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[0U];
            __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[1U];
            __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[2U];
            __VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                = vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i;
            __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            vlSelfRef.__PVT__rd_data_main[0U] = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i][0U];
            vlSelfRef.__PVT__rd_data_main[1U] = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i][1U];
            vlSelfRef.__PVT__rd_data_main[2U] = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i][2U];
        }
    }
    if (vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U];
                __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U];
                __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U];
                __VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i));
                __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[0U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][0U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[1U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][1U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[2U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][2U];
            } else {
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[0U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[1U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[2U] = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U];
                __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U];
                __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U];
                __VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i));
                __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][0U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][1U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[2U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][2U];
            } else {
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[2U] = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U];
                __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U];
                __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U];
                __VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i));
                __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][0U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][1U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][2U];
            } else {
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__VdfgRegularize_h6e95ff9d_0_1470[0U];
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__VdfgRegularize_h6e95ff9d_0_1470[1U];
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[2U] 
            = ((0x80000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.prim_flash_req_o[3U] 
                               << 0x0000001eU)) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__VdfgRegularize_h6e95ff9d_0_1470[2U]);
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[3U] 
            = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.prim_flash_req_o[3U] 
                              >> 2U));
        if ((0xc9U >= (0x000000ffU & ((IData)(0x00000065U) 
                                      * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) {
            VL_ASSIGNSEL_WW(202, 101, (0x000000ffU 
                                       & ((IData)(0x00000065U) 
                                          * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))), vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0);
        }
    }
    if (__VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
    if (__VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
    if (__VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
    if (__VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
}

void Vsim_prim_generic_flash_bank__pi296___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__1(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__index_cnt_inc) {
            vlSelfRef.__PVT__index_cnt = ((IData)(1U) 
                                          + vlSelfRef.__PVT__index_cnt);
        } else if (vlSelfRef.__PVT__index_cnt_clr) {
            vlSelfRef.__PVT__index_cnt = 0U;
        }
        if (vlSelfRef.__PVT__time_cnt_inc) {
            vlSelfRef.__PVT__time_cnt = ((IData)(1U) 
                                         + vlSelfRef.__PVT__time_cnt);
        } else if (vlSelfRef.__PVT__time_cnt_set1) {
            vlSelfRef.__PVT__time_cnt = 1U;
        } else if (vlSelfRef.__PVT__time_cnt_clr) {
            vlSelfRef.__PVT__time_cnt = 0U;
        }
        if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
            __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
        }
        if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
            __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (2U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb)) 
                         << 1U));
        } else if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
            __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
        }
        vlSelfRef.__PVT__index_limit_q = vlSelfRef.__PVT__index_limit_d;
        vlSelfRef.__PVT__time_limit_q = vlSelfRef.__PVT__time_limit_d;
        vlSelfRef.__PVT__st_q = vlSelfRef.__PVT__st_d;
        if (vlSelfRef.__PVT__mem_rd_d) {
            vlSelfRef.__PVT__rd_part_q = (1U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                >> 0x0000000eU));
            vlSelfRef.__PVT__info_sel_q = (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000000cU));
        }
        if (vlSelfRef.__PVT__mem_rd_q) {
            vlSelfRef.__PVT__rd_data_q[0U] = vlSelfRef.__PVT__rd_data_d[0U];
            vlSelfRef.__PVT__rd_data_q[1U] = vlSelfRef.__PVT__rd_data_d[1U];
            vlSelfRef.__PVT__rd_data_q[2U] = vlSelfRef.__PVT__rd_data_d[2U];
        }
    } else {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__index_cnt = 0U;
        vlSelfRef.__PVT__time_cnt = 0U;
        __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        vlSelfRef.__PVT__index_limit_q = 0U;
        vlSelfRef.__PVT__time_limit_q = 0U;
        vlSelfRef.__PVT__st_q = 0U;
        vlSelfRef.__PVT__rd_part_q = 0U;
        vlSelfRef.__PVT__info_sel_q = 0U;
        vlSelfRef.__PVT__rd_data_q[0U] = 0U;
        vlSelfRef.__PVT__rd_data_q[1U] = 0U;
        vlSelfRef.__PVT__rd_data_q[2U] = 0U;
    }
    vlSelfRef.__PVT__prog_pend_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__prog_pend_d));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__full_o = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                == 
                                                (2U 
                                                 ^ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.init_busy_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            vlSelfRef.init_busy_o = 1U;
        }
    }
    vlSelfRef.__PVT__mem_rd_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                 && (IData)(vlSelfRef.__PVT__mem_rd_d));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__wready_o = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__full_o)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.ack_o = ((~ (IData)(vlSelfRef.init_busy_o)) 
                       & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__wready_o));
}

void Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_3;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    __Vtemp_3[0U] = vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[0U];
    __Vtemp_3[1U] = vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[1U];
    __Vtemp_3[2U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] 
                      << 0x0000000cU) | vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[2U]);
    __Vtemp_3[3U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] 
                      >> 0x00000014U) | (vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] 
                                         << 0x0000000cU));
    __Vtemp_3[4U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] 
                      << 0x00000018U) | ((vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] 
                                          >> 0x00000014U) 
                                         | (vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[2U] 
                                            << 0x0000000cU)));
    __Vtemp_3[5U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] 
                      >> 8U) | (vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] 
                                << 0x00000018U));
    __Vtemp_3[6U] = ((vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] 
                      >> 8U) | (vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] 
                                << 0x00000018U));
    __Vtemp_3[7U] = (vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] 
                     >> 8U);
    __VExpandSel_WordIdx_1 = (7U & (((IData)(0x0000004cU) 
                                     * (IData)(vlSelfRef.__PVT__info_sel_q)) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x0000004cU) 
                                             * (IData)(vlSelfRef.__PVT__info_sel_q)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__rd_part_q) {
        if ((0xe3U >= (0x000000ffU & ((IData)(0x0000004cU) 
                                      * (IData)(vlSelfRef.__PVT__info_sel_q))))) {
            vlSelfRef.__PVT__rd_data_d[0U] = (((__Vtemp_3[
                                                ((IData)(1U) 
                                                 + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (__Vtemp_3[__VExpandSel_WordIdx_1] 
                                                 >> __VExpandSel_LoShift_1));
            vlSelfRef.__PVT__rd_data_d[1U] = (((__Vtemp_3[
                                                ((IData)(2U) 
                                                 + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (__Vtemp_3[
                                                 ((IData)(1U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1));
            vlSelfRef.__PVT__rd_data_d[2U] = (0x00000fffU 
                                              & (((((5U 
                                                     <= __VExpandSel_WordIdx_1)
                                                     ? 0U
                                                     : 
                                                    __Vtemp_3[
                                                    ((IData)(3U) 
                                                     + __VExpandSel_WordIdx_1)]) 
                                                   << __VExpandSel_HiShift_1) 
                                                  & __VExpandSel_HiMask_1) 
                                                 | (__Vtemp_3[
                                                    ((IData)(2U) 
                                                     + __VExpandSel_WordIdx_1)] 
                                                    >> __VExpandSel_LoShift_1)));
        } else {
            vlSelfRef.__PVT__rd_data_d[0U] = 0U;
            vlSelfRef.__PVT__rd_data_d[1U] = 0U;
            vlSelfRef.__PVT__rd_data_d[2U] = (0x00000fffU 
                                              & 0U);
        }
    } else {
        vlSelfRef.__PVT__rd_data_d[0U] = vlSelfRef.__PVT__rd_data_main[0U];
        vlSelfRef.__PVT__rd_data_d[1U] = vlSelfRef.__PVT__rd_data_main[1U];
        vlSelfRef.__PVT__rd_data_d[2U] = (0x00000fffU 
                                          & vlSelfRef.__PVT__rd_data_main[2U]);
    }
    __VExpandSel_WordIdx_2 = (7U & (((IData)(0x00000065U) 
                                     * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    >> 5U));
    __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000065U) 
                                             * (1U 
                                                & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
    if (__VExpandSel_Aligned_2) {
        __VExpandSel_HiShift_2 = 0U;
        __VExpandSel_HiMask_2 = 0U;
    } else {
        __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_2);
        __VExpandSel_HiMask_2 = 0xffffffffU;
    }
    if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] = 0U;
    } else if ((0xc9U >= (0x000000ffU & ((IData)(0x00000065U) 
                                         * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))) {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] 
            = (((vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                 << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
               | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[__VExpandSel_WordIdx_2] 
                  >> __VExpandSel_LoShift_2));
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] 
            = (((vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                 << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
               | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                  >> __VExpandSel_LoShift_2));
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
            = (((vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                 ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                 << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
               | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                  ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                  >> __VExpandSel_LoShift_2));
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
            = (0x0000001fU & (((((3U <= __VExpandSel_WordIdx_2)
                                  ? 0U : vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(4U) + __VExpandSel_WordIdx_2)]) 
                                << __VExpandSel_HiShift_2) 
                               & __VExpandSel_HiMask_2) 
                              | (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                 ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                                 >> __VExpandSel_LoShift_2)));
    } else {
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] = 0U;
    }
    if ((1U == vlSelfRef.__PVT__ReadLatency)) {
        vlSelfRef.rd_data_o[0U] = vlSelfRef.__PVT__rd_data_d[0U];
        vlSelfRef.rd_data_o[1U] = vlSelfRef.__PVT__rd_data_d[1U];
        vlSelfRef.rd_data_o[2U] = vlSelfRef.__PVT__rd_data_d[2U];
    } else {
        vlSelfRef.rd_data_o[0U] = vlSelfRef.__PVT__rd_data_q[0U];
        vlSelfRef.rd_data_o[1U] = vlSelfRef.__PVT__rd_data_q[1U];
        vlSelfRef.rd_data_o[2U] = vlSelfRef.__PVT__rd_data_q[2U];
    }
    vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i 
        = (0x0000ffffU & (((vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            << 0x00000011U) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                               >> 0x0000000fU)) 
                          + vlSelfRef.__PVT__index_cnt));
    vlSelfRef.__PVT__bk_erase_req = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                        >> 0x0000001fU));
    vlSelfRef.__PVT__pg_erase_req = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U]));
    vlSelfRef.__PVT__prog_req = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                          >> 3U)));
    vlSelfRef.__PVT__rd_req = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                               & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                  >> 4U));
    vlSelfRef.__PVT__time_cnt_set1 = 0U;
    vlSelfRef.__PVT__index_limit_d = vlSelfRef.__PVT__index_limit_q;
    vlSelfRef.__PVT__prog_pend_d = vlSelfRef.__PVT__prog_pend_q;
    vlSelfRef.__PVT__time_limit_d = vlSelfRef.__PVT__time_limit_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_pend_q)))) {
                        if (vlSelfRef.__PVT__rd_req) {
                            vlSelfRef.__PVT__time_cnt_set1 = 1U;
                        }
                    }
                    if (vlSelfRef.__PVT__prog_pend_q) {
                        vlSelfRef.__PVT__prog_pend_d = 0U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                if (vlSelfRef.__PVT__prog_req) {
                    vlSelfRef.__PVT__prog_pend_d = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_req)))) {
                        if (vlSelfRef.__PVT__pg_erase_req) {
                            vlSelfRef.__PVT__index_limit_d = 0x00000100U;
                            vlSelfRef.__PVT__time_limit_d 
                                = vlSelfRef.__PVT__EraseLatency;
                        } else if (vlSelfRef.__PVT__bk_erase_req) {
                            vlSelfRef.__PVT__index_limit_d = 0x00010000U;
                            vlSelfRef.__PVT__time_limit_d = 0x000007d0U;
                        }
                    }
                }
            }
        }
    }
}

void Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__2(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h719ce750_0_1;
    __VdfgRegularize_h719ce750_0_1 = 0;
    // Body
    vlSelfRef.he_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
                      & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_he_en) 
                         | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_he_en)));
    vlSelfRef.erase_suspend_req_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_erase__DOT__suspend_valid));
    vlSelfRef.__PVT__index_cnt_inc = 0U;
    vlSelfRef.__PVT__index_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wdata[0U] = 0U;
    vlSelfRef.__PVT__mem_wdata[1U] = 0U;
    vlSelfRef.__PVT__mem_wdata[2U] = 0U;
    vlSelfRef.__PVT__time_cnt_inc = 0U;
    vlSelfRef.__PVT__time_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wr = 0U;
    vlSelfRef.__PVT__pop_cmd = 0U;
    vlSelfRef.__PVT__mem_req = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                    if (((vlSelfRef.__PVT__index_cnt 
                          < vlSelfRef.__PVT__index_limit_q) 
                         | (vlSelfRef.__PVT__time_cnt 
                            < vlSelfRef.__PVT__time_limit_q))) {
                        vlSelfRef.__PVT__index_cnt_inc 
                            = (vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q);
                        vlSelfRef.__PVT__mem_wdata[0U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[1U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[2U] = 0x00000fffU;
                        vlSelfRef.__PVT__time_cnt_inc 
                            = (vlSelfRef.__PVT__time_cnt 
                               < vlSelfRef.__PVT__time_limit_q);
                        vlSelfRef.__PVT__mem_wr = 1U;
                        vlSelfRef.__PVT__mem_req = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__mem_wdata[0U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] 
                                                  & vlSelfRef.__PVT__rd_data_q[0U]);
                vlSelfRef.__PVT__mem_wdata[1U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] 
                                                  & vlSelfRef.__PVT__rd_data_q[1U]);
                vlSelfRef.__PVT__mem_wdata[2U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                  & vlSelfRef.__PVT__rd_data_q[2U]);
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ProgLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                    vlSelfRef.__PVT__mem_wr = 1U;
                    vlSelfRef.__PVT__mem_req = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                vlSelfRef.__PVT__index_cnt_clr = 1U;
                vlSelfRef.__PVT__time_cnt_clr = 1U;
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.done_o = 1U;
            } else {
                vlSelfRef.done_o = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q) 
                              | (vlSelfRef.__PVT__time_cnt 
                                 < vlSelfRef.__PVT__time_limit_q))))) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                    vlSelfRef.__PVT__time_cnt_clr = 1U;
                    vlSelfRef.__PVT__pop_cmd = 1U;
                }
            }
            vlSelfRef.done_o = (1U & (~ ((IData)(vlSelfRef.erase_suspend_req_i) 
                                         | ((vlSelfRef.__PVT__index_cnt 
                                             < vlSelfRef.__PVT__index_limit_q) 
                                            | (vlSelfRef.__PVT__time_cnt 
                                               < vlSelfRef.__PVT__time_limit_q)))));
        } else {
            if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
                vlSelfRef.__PVT__time_cnt_clr = 1U;
                vlSelfRef.__PVT__pop_cmd = 1U;
            }
            vlSelfRef.done_o = (1U & ((vlSelfRef.__PVT__time_cnt 
                                       >= vlSelfRef.__PVT__ProgLatency) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                         >> 2U)));
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((0x00000064U > vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_inc = 1U;
                }
                if ((0x00000064U <= vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ReadLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                }
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if (vlSelfRef.__PVT__prog_pend_q) {
                        vlSelfRef.__PVT__time_cnt_clr = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                        vlSelfRef.__PVT__time_cnt_clr = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_pend_q)))) {
                        if (vlSelfRef.__PVT__rd_req) {
                            vlSelfRef.__PVT__pop_cmd = 1U;
                            vlSelfRef.__PVT__mem_req = 1U;
                        }
                    }
                }
            } else if (vlSelfRef.__PVT__rd_req) {
                vlSelfRef.__PVT__time_cnt_inc = 1U;
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.__PVT__mem_req = 1U;
            } else if (vlSelfRef.__PVT__prog_req) {
                vlSelfRef.__PVT__mem_req = 1U;
            }
        }
        vlSelfRef.done_o = (1U & (((IData)(vlSelfRef.__PVT__st_q) 
                                   >> 1U) & ((~ ((vlSelfRef.__PVT__time_cnt 
                                                  < vlSelfRef.__PVT__ReadLatency) 
                                                 | (IData)(vlSelfRef.__PVT__prog_pend_q))) 
                                             & (IData)(vlSelfRef.__PVT__st_q))));
    }
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__pop_cmd)));
    vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(vlSelfRef.__PVT__mem_req) & (IData)(
                                                       (0x00004000U 
                                                        != 
                                                        (0x80004000U 
                                                         & vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U]))));
    vlSelfRef.__PVT__mem_rd_d = ((~ (IData)(vlSelfRef.__PVT__mem_wr)) 
                                 & (IData)(vlSelfRef.__PVT__mem_req));
    __VdfgRegularize_h719ce750_0_1 = ((IData)(vlSelfRef.__PVT__mem_req) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                         >> 0x0000000eU));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((0U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((2U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
}

void Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__4(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__0__KET____DOT__u_prim_flash_bank__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__st_d = vlSelfRef.__PVT__st_q;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            vlSelfRef.__PVT__st_d = 2U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if (vlSelfRef.erase_suspend_req_i) {
                vlSelfRef.__PVT__st_d = 6U;
            } else if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                                  < vlSelfRef.__PVT__index_limit_q) 
                                 | (vlSelfRef.__PVT__time_cnt 
                                    < vlSelfRef.__PVT__time_limit_q))))) {
                vlSelfRef.__PVT__st_d = 2U;
            }
        } else if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
            vlSelfRef.__PVT__st_d = 2U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                vlSelfRef.__PVT__st_d = ((IData)(vlSelfRef.__PVT__prog_pend_q)
                                          ? 4U : ((IData)(vlSelfRef.__PVT__rd_req)
                                                   ? 3U
                                                   : 2U));
            }
        } else if (vlSelfRef.__PVT__rd_req) {
            vlSelfRef.__PVT__st_d = 3U;
        } else if (vlSelfRef.__PVT__prog_req) {
            vlSelfRef.__PVT__st_d = 3U;
        } else if (vlSelfRef.__PVT__pg_erase_req) {
            vlSelfRef.__PVT__st_d = 5U;
        } else if (vlSelfRef.__PVT__bk_erase_req) {
            vlSelfRef.__PVT__st_d = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
        vlSelfRef.__PVT__st_d = ((0x00000064U > vlSelfRef.__PVT__index_cnt)
                                  ? 1U : 2U);
    } else if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
                & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__fla_pdm_h)))) {
        vlSelfRef.__PVT__st_d = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni)) 
               | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__fla_pdm_h)))) {
        vlSelfRef.__PVT__st_d = 0U;
    }
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 65536, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00010000U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x0000ffffU 
                                                                                & index)][0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x0000ffffU 
                                                                                & index)][1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x0000ffffU 
                                                                                & index)][2U] 
            = (0x00000fffU & val[2U]);
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00010000U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x0000ffffU & index)][0U];
        val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x0000ffffU & index)][1U];
        val[2U] = ((0xfffff000U & val[2U]) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                   [(0x0000ffffU & index)][2U]);
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 2560, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U] 
            = (0x00000fffU & val[2U]);
        if (VL_LIKELY(((0x09ffU >= (0x00000fffU & index))))) {
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U];
        }
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        if ((0x09ffU >= (0x00000fffU & index))) {
            val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][0U];
            val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][1U];
        } else {
            val[0U] = 0U;
            val[1U] = 0U;
        }
        val[2U] = ((0xfffff000U & val[2U]) | ((0x09ffU 
                                               >= (0x00000fffU 
                                                   & index))
                                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                                              [(0x00000fffU 
                                                & index)][2U]
                                               : 0U));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 2560, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U] 
            = (0x00000fffU & val[2U]);
        if (VL_LIKELY(((0x09ffU >= (0x00000fffU & index))))) {
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U];
        }
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        if ((0x09ffU >= (0x00000fffU & index))) {
            val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][0U];
            val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][1U];
        } else {
            val[0U] = 0U;
            val[1U] = 0U;
        }
        val[2U] = ((0xfffff000U & val[2U]) | ((0x09ffU 
                                               >= (0x00000fffU 
                                                   & index))
                                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                                              [(0x00000fffU 
                                                & index)][2U]
                                               : 0U));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 76, 2560, 0, file,  &(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U] 
            = val[0U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U] 
            = val[1U];
        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U] 
            = (0x00000fffU & val[2U]);
        if (VL_LIKELY(((0x09ffU >= (0x00000fffU & index))))) {
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[0U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[1U];
            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x00000fffU 
                                                                                & index)][2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0[2U];
        }
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296____Vdpiexp_gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x00000a00U, index) ? 0U
            : 1U);
    if ((1U == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vsim__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vsim__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vsim__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vsim__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vsim__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vsim__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vsim__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vsim__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vsim__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vsim__ConstPool__CONST_hc1613866_0[9U];
        if ((0x09ffU >= (0x00000fffU & index))) {
            val[0U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][0U];
            val[1U] = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x00000fffU & index)][1U];
        } else {
            val[0U] = 0U;
            val[1U] = 0U;
        }
        val[2U] = ((0xfffff000U & val[2U]) | ((0x09ffU 
                                               >= (0x00000fffU 
                                                   & index))
                                               ? vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                                              [(0x00000fffU 
                                                & index)][2U]
                                               : 0U));
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

void Vsim_prim_generic_flash_bank__pi296___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___eval_initial__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)VL_VALUEPLUSARGS_INI(1, "flash_rand_delay_en=%0b"s, 
                               vlSelfRef.__PVT__unnamedblk1__DOT__flash_rand_delay_en);
    if (vlSelfRef.__PVT__unnamedblk1__DOT__flash_rand_delay_en) {
        vlSelfRef.__PVT__ReadLatency = VL_URANDOM_RANGE_I(1U, 5U);
        vlSelfRef.__PVT__ProgLatency = VL_URANDOM_RANGE_I(0x00000019U, 0x00000032U);
        vlSelfRef.__PVT__EraseLatency = VL_URANDOM_RANGE_I(0x0000007dU, 0x000000c8U);
    }
    (void)VL_VALUEPLUSARGS_INI(32, "flash_read_latency=%0d"s, 
                               vlSelfRef.__PVT__ReadLatency);
    (void)VL_VALUEPLUSARGS_INI(32, "flash_program_latency=%0d"s, 
                               vlSelfRef.__PVT__ProgLatency);
    (void)VL_VALUEPLUSARGS_INI(32, "flash_erase_latency=%0d"s, 
                               vlSelfRef.__PVT__EraseLatency);
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[1].u_prim_flash_bank.u_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[1].u_prim_flash_bank.gen_info_types[0].u_info_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[1].u_prim_flash_bank.gen_info_types[1].u_info_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    (void)VL_VALUEPLUSARGS_INI(1, "show_mem_paths=%0b"s, 
                               vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths);
    if (VL_UNLIKELY((vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths))) {
        VL_WRITEF_NX("%Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_eflash.u_flash.gen_generic.u_impl_generic.gen_prim_flash_banks[1].u_prim_flash_bank.gen_info_types[2].u_info_mem.gen_generic.u_impl_generic.unnamedblk2\n",0,
                     vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__0(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.part_i = (1U & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__host_req)) 
                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                 >> 5U)));
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__1(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h719ce750_0_1;
    __VdfgRegularize_h719ce750_0_1 = 0;
    // Body
    vlSelfRef.erase_suspend_req_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_erase__DOT__suspend_valid));
    vlSelfRef.bk_erase_i = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__reqs) 
                             >> 2U) & (0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_erase__DOT__state_q)));
    vlSelfRef.pg_erase_i = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__reqs) 
                             >> 1U) & (0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_erase__DOT__state_q)));
    vlSelfRef.__PVT__index_cnt_inc = 0U;
    vlSelfRef.__PVT__index_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wdata[0U] = 0U;
    vlSelfRef.__PVT__mem_wdata[1U] = 0U;
    vlSelfRef.__PVT__mem_wdata[2U] = 0U;
    vlSelfRef.__PVT__time_cnt_inc = 0U;
    vlSelfRef.__PVT__time_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wr = 0U;
    vlSelfRef.__PVT__st_d = vlSelfRef.__PVT__st_q;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                    if (((vlSelfRef.__PVT__index_cnt 
                          < vlSelfRef.__PVT__index_limit_q) 
                         | (vlSelfRef.__PVT__time_cnt 
                            < vlSelfRef.__PVT__time_limit_q))) {
                        vlSelfRef.__PVT__index_cnt_inc 
                            = (vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q);
                        vlSelfRef.__PVT__mem_wdata[0U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[1U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[2U] = 0x00000fffU;
                        vlSelfRef.__PVT__time_cnt_inc 
                            = (vlSelfRef.__PVT__time_cnt 
                               < vlSelfRef.__PVT__time_limit_q);
                        vlSelfRef.__PVT__mem_wr = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__mem_wdata[0U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] 
                                                  & vlSelfRef.__PVT__rd_data_q[0U]);
                vlSelfRef.__PVT__mem_wdata[1U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] 
                                                  & vlSelfRef.__PVT__rd_data_q[1U]);
                vlSelfRef.__PVT__mem_wdata[2U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                  & vlSelfRef.__PVT__rd_data_q[2U]);
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ProgLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                    vlSelfRef.__PVT__mem_wr = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                vlSelfRef.__PVT__index_cnt_clr = 1U;
                vlSelfRef.__PVT__time_cnt_clr = 1U;
            }
            vlSelfRef.__PVT__st_d = 2U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q) 
                              | (vlSelfRef.__PVT__time_cnt 
                                 < vlSelfRef.__PVT__time_limit_q))))) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                    vlSelfRef.__PVT__time_cnt_clr = 1U;
                }
            }
            if (vlSelfRef.erase_suspend_req_i) {
                vlSelfRef.__PVT__st_d = 6U;
            } else if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                                  < vlSelfRef.__PVT__index_limit_q) 
                                 | (vlSelfRef.__PVT__time_cnt 
                                    < vlSelfRef.__PVT__time_limit_q))))) {
                vlSelfRef.__PVT__st_d = 2U;
            }
        } else if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
            vlSelfRef.__PVT__time_cnt_clr = 1U;
            vlSelfRef.__PVT__st_d = 2U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((0x00000064U > vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_inc = 1U;
                }
                if ((0x00000064U <= vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ReadLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                }
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if (vlSelfRef.__PVT__prog_pend_q) {
                        vlSelfRef.__PVT__time_cnt_clr = 1U;
                        vlSelfRef.__PVT__st_d = 4U;
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                            vlSelfRef.__PVT__time_cnt_clr = 1U;
                        }
                        vlSelfRef.__PVT__st_d = ((IData)(vlSelfRef.__PVT__rd_req)
                                                  ? 3U
                                                  : 2U);
                    }
                }
            } else if (vlSelfRef.__PVT__rd_req) {
                vlSelfRef.__PVT__time_cnt_inc = 1U;
                vlSelfRef.__PVT__st_d = 3U;
            } else if (vlSelfRef.__PVT__prog_req) {
                vlSelfRef.__PVT__st_d = 3U;
            } else if (vlSelfRef.__PVT__pg_erase_req) {
                vlSelfRef.__PVT__st_d = 5U;
            } else if (vlSelfRef.__PVT__bk_erase_req) {
                vlSelfRef.__PVT__st_d = 5U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            vlSelfRef.__PVT__st_d = ((0x00000064U > vlSelfRef.__PVT__index_cnt)
                                      ? 1U : 2U);
        } else if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni) 
                    & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__fla_pdm_h)))) {
            vlSelfRef.__PVT__st_d = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni)) 
               | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__fla_pdm_h)))) {
        vlSelfRef.__PVT__st_d = 0U;
    }
    vlSelfRef.__PVT__pop_cmd = 0U;
    vlSelfRef.__PVT__mem_req = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.done_o = 1U;
            } else {
                vlSelfRef.done_o = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q) 
                              | (vlSelfRef.__PVT__time_cnt 
                                 < vlSelfRef.__PVT__time_limit_q))))) {
                    vlSelfRef.__PVT__pop_cmd = 1U;
                }
            }
            vlSelfRef.done_o = (1U & (~ ((IData)(vlSelfRef.erase_suspend_req_i) 
                                         | ((vlSelfRef.__PVT__index_cnt 
                                             < vlSelfRef.__PVT__index_limit_q) 
                                            | (vlSelfRef.__PVT__time_cnt 
                                               < vlSelfRef.__PVT__time_limit_q)))));
        } else {
            if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
                vlSelfRef.__PVT__pop_cmd = 1U;
            }
            vlSelfRef.done_o = (1U & ((vlSelfRef.__PVT__time_cnt 
                                       >= vlSelfRef.__PVT__ProgLatency) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                         >> 2U)));
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                    if (((vlSelfRef.__PVT__index_cnt 
                          < vlSelfRef.__PVT__index_limit_q) 
                         | (vlSelfRef.__PVT__time_cnt 
                            < vlSelfRef.__PVT__time_limit_q))) {
                        vlSelfRef.__PVT__mem_req = 1U;
                    }
                }
            } else if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ProgLatency)) {
                vlSelfRef.__PVT__mem_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_pend_q)))) {
                        if (vlSelfRef.__PVT__rd_req) {
                            vlSelfRef.__PVT__pop_cmd = 1U;
                            vlSelfRef.__PVT__mem_req = 1U;
                        }
                    }
                }
            } else if (vlSelfRef.__PVT__rd_req) {
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.__PVT__mem_req = 1U;
            } else if (vlSelfRef.__PVT__prog_req) {
                vlSelfRef.__PVT__mem_req = 1U;
            }
        }
        vlSelfRef.done_o = (1U & (((IData)(vlSelfRef.__PVT__st_q) 
                                   >> 1U) & ((~ ((vlSelfRef.__PVT__time_cnt 
                                                  < vlSelfRef.__PVT__ReadLatency) 
                                                 | (IData)(vlSelfRef.__PVT__prog_pend_q))) 
                                             & (IData)(vlSelfRef.__PVT__st_q))));
    }
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__pop_cmd)));
    vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(vlSelfRef.__PVT__mem_req) & (IData)(
                                                       (0x00004000U 
                                                        != 
                                                        (0x80004000U 
                                                         & vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U]))));
    vlSelfRef.__PVT__mem_rd_d = ((~ (IData)(vlSelfRef.__PVT__mem_wr)) 
                                 & (IData)(vlSelfRef.__PVT__mem_req));
    __VdfgRegularize_h719ce750_0_1 = ((IData)(vlSelfRef.__PVT__mem_req) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                         >> 0x0000000eU));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((0U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((2U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
}

void Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__2(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_i = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__req_i) 
                      & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__no_buf_en_change) 
                         & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_20) 
                            & ((~ (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__buf_match))) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.u_rd__DOT____VdfgRegularize_hfb58ac9e_0_11)))));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlSelfRef.init_busy_o)) & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__flash_prog_req) 
                                                  | ((IData)(vlSelfRef.rd_i) 
                                                     | ((IData)(vlSelfRef.bk_erase_i) 
                                                        | (IData)(vlSelfRef.pg_erase_i))))) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__wready_o));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim_prim_generic_flash_bank__pi296___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__0(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*75:0*/ __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*15:0*/ __VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*11:0*/ __VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*11:0*/ __VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    VlWide<3>/*75:0*/ __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    VL_ZERO_W(76, __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0);
    SData/*11:0*/ __VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    // Body
    __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    if (vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[0U];
            __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[1U];
            __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0[2U];
            __VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                = vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i;
            __VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            vlSelfRef.__PVT__rd_data_main[0U] = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i][0U];
            vlSelfRef.__PVT__rd_data_main[1U] = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i][1U];
            vlSelfRef.__PVT__rd_data_main[2U] = vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i][2U];
        }
    }
    if (vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U];
                __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U];
                __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U];
                __VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i));
                __VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[0U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][0U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[1U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][1U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[2U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][2U];
            } else {
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[0U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[1U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o[2U] = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U];
                __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U];
                __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U];
                __VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i));
                __VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][0U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][1U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[2U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][2U];
            } else {
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[0U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[1U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o[2U] = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i) {
        if (vlSelfRef.__PVT__mem_wr) {
            vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 1U;
            vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U] 
                = vlSelfRef.__PVT__mem_wdata[0U];
            vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U] 
                = vlSelfRef.__PVT__mem_wdata[1U];
            vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U] 
                = vlSelfRef.__PVT__mem_wdata[2U];
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U] 
                    = vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[0U];
                __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U] 
                    = vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[1U];
                __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U] 
                    = vlSelfRef.gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0[2U];
                __VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i));
                __VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_wr)))) {
            if ((0x09ffU >= (0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i)))) {
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][0U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][1U];
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] 
                    = vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i))][2U];
            } else {
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[0U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[1U] = 0U;
                vlSelfRef.__Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o[2U] = 0U;
            }
        }
    }
    if (vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__VdfgRegularize_h6e95ff9d_0_1469[0U];
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__VdfgRegularize_h6e95ff9d_0_1469[1U];
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[2U] 
            = ((0x80000000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.prim_flash_req_o[3U] 
                               << 0x0000001eU)) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__VdfgRegularize_h6e95ff9d_0_1469[2U]);
        vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0[3U] 
            = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.prim_flash_req_o[3U] 
                              >> 2U));
        if ((0xc9U >= (0x000000ffU & ((IData)(0x00000065U) 
                                      * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) {
            VL_ASSIGNSEL_WW(202, 101, (0x000000ffU 
                                       & ((IData)(0x00000065U) 
                                          * (1U & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))), vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage, vlSelfRef.u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0);
        }
    }
    if (__VdlySet__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
    if (__VdlySet__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
    if (__VdlySet__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
    if (__VdlySet__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][0U] 
            = __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[0U];
        vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][1U] 
            = __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[1U];
        vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0][2U] 
            = __VdlyVal__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0[2U];
    }
}

void Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__2(Vsim_prim_generic_flash_bank__pi296* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_prim_generic_flash_bank__pi296___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_prim_flash_banks__BRA__1__KET____DOT__u_prim_flash_bank__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h719ce750_0_1;
    __VdfgRegularize_h719ce750_0_1 = 0;
    // Body
    vlSelfRef.erase_suspend_req_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
                                     & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_erase__DOT__suspend_valid));
    vlSelfRef.bk_erase_i = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__reqs) 
                             >> 2U) & (0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_erase__DOT__state_q)));
    vlSelfRef.pg_erase_i = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__reqs) 
                             >> 1U) & (0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_erase__DOT__state_q)));
    vlSelfRef.__PVT__index_cnt_inc = 0U;
    vlSelfRef.__PVT__index_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wdata[0U] = 0U;
    vlSelfRef.__PVT__mem_wdata[1U] = 0U;
    vlSelfRef.__PVT__mem_wdata[2U] = 0U;
    vlSelfRef.__PVT__time_cnt_inc = 0U;
    vlSelfRef.__PVT__time_cnt_clr = 0U;
    vlSelfRef.__PVT__mem_wr = 0U;
    vlSelfRef.__PVT__pop_cmd = 0U;
    vlSelfRef.__PVT__mem_req = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                    if (((vlSelfRef.__PVT__index_cnt 
                          < vlSelfRef.__PVT__index_limit_q) 
                         | (vlSelfRef.__PVT__time_cnt 
                            < vlSelfRef.__PVT__time_limit_q))) {
                        vlSelfRef.__PVT__index_cnt_inc 
                            = (vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q);
                        vlSelfRef.__PVT__mem_wdata[0U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[1U] = 0xffffffffU;
                        vlSelfRef.__PVT__mem_wdata[2U] = 0x00000fffU;
                        vlSelfRef.__PVT__time_cnt_inc 
                            = (vlSelfRef.__PVT__time_cnt 
                               < vlSelfRef.__PVT__time_limit_q);
                        vlSelfRef.__PVT__mem_wr = 1U;
                        vlSelfRef.__PVT__mem_req = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__mem_wdata[0U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[0U] 
                                                  & vlSelfRef.__PVT__rd_data_q[0U]);
                vlSelfRef.__PVT__mem_wdata[1U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[1U] 
                                                  & vlSelfRef.__PVT__rd_data_q[1U]);
                vlSelfRef.__PVT__mem_wdata[2U] = (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                  & vlSelfRef.__PVT__rd_data_q[2U]);
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ProgLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                    vlSelfRef.__PVT__mem_wr = 1U;
                    vlSelfRef.__PVT__mem_req = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__st_q)))) {
                vlSelfRef.__PVT__index_cnt_clr = 1U;
                vlSelfRef.__PVT__time_cnt_clr = 1U;
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.done_o = 1U;
            } else {
                vlSelfRef.done_o = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (~ (IData)(vlSelfRef.erase_suspend_req_i)))) {
                if ((1U & (~ ((vlSelfRef.__PVT__index_cnt 
                               < vlSelfRef.__PVT__index_limit_q) 
                              | (vlSelfRef.__PVT__time_cnt 
                                 < vlSelfRef.__PVT__time_limit_q))))) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                    vlSelfRef.__PVT__time_cnt_clr = 1U;
                    vlSelfRef.__PVT__pop_cmd = 1U;
                }
            }
            vlSelfRef.done_o = (1U & (~ ((IData)(vlSelfRef.erase_suspend_req_i) 
                                         | ((vlSelfRef.__PVT__index_cnt 
                                             < vlSelfRef.__PVT__index_limit_q) 
                                            | (vlSelfRef.__PVT__time_cnt 
                                               < vlSelfRef.__PVT__time_limit_q)))));
        } else {
            if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ProgLatency)) {
                vlSelfRef.__PVT__time_cnt_clr = 1U;
                vlSelfRef.__PVT__pop_cmd = 1U;
            }
            vlSelfRef.done_o = (1U & ((vlSelfRef.__PVT__time_cnt 
                                       >= vlSelfRef.__PVT__ProgLatency) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[3U] 
                                         >> 2U)));
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__st_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((0x00000064U > vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_inc = 1U;
                }
                if ((0x00000064U <= vlSelfRef.__PVT__index_cnt)) {
                    vlSelfRef.__PVT__index_cnt_clr = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__st_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__st_q))) {
                if ((vlSelfRef.__PVT__time_cnt < vlSelfRef.__PVT__ReadLatency)) {
                    vlSelfRef.__PVT__time_cnt_inc = 1U;
                }
                if ((vlSelfRef.__PVT__time_cnt >= vlSelfRef.__PVT__ReadLatency)) {
                    if (vlSelfRef.__PVT__prog_pend_q) {
                        vlSelfRef.__PVT__time_cnt_clr = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__rd_req)))) {
                        vlSelfRef.__PVT__time_cnt_clr = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__prog_pend_q)))) {
                        if (vlSelfRef.__PVT__rd_req) {
                            vlSelfRef.__PVT__pop_cmd = 1U;
                            vlSelfRef.__PVT__mem_req = 1U;
                        }
                    }
                }
            } else if (vlSelfRef.__PVT__rd_req) {
                vlSelfRef.__PVT__time_cnt_inc = 1U;
                vlSelfRef.__PVT__pop_cmd = 1U;
                vlSelfRef.__PVT__mem_req = 1U;
            } else if (vlSelfRef.__PVT__prog_req) {
                vlSelfRef.__PVT__mem_req = 1U;
            }
        }
        vlSelfRef.done_o = (1U & (((IData)(vlSelfRef.__PVT__st_q) 
                                   >> 1U) & ((~ ((vlSelfRef.__PVT__time_cnt 
                                                  < vlSelfRef.__PVT__ReadLatency) 
                                                 | (IData)(vlSelfRef.__PVT__prog_pend_q))) 
                                             & (IData)(vlSelfRef.__PVT__st_q))));
    }
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__pop_cmd)));
    vlSelfRef.__PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(vlSelfRef.__PVT__mem_req) & (IData)(
                                                       (0x00004000U 
                                                        != 
                                                        (0x80004000U 
                                                         & vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U]))));
    vlSelfRef.__PVT__mem_rd_d = ((~ (IData)(vlSelfRef.__PVT__mem_wr)) 
                                 & (IData)(vlSelfRef.__PVT__mem_req));
    __VdfgRegularize_h719ce750_0_1 = ((IData)(vlSelfRef.__PVT__mem_req) 
                                      & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                         >> 0x0000000eU));
    vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((0U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((1U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i 
        = ((IData)(__VdfgRegularize_h719ce750_0_1) 
           & ((2U == (3U & (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                            >> 0x0000000cU))) | (vlSelfRef.__PVT__u_cmd_fifo__DOT__rdata_o[2U] 
                                                 >> 0x0000001fU)));
}

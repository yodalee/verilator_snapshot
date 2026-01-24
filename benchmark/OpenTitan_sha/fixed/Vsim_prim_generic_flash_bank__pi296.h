// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_PRIM_GENERIC_FLASH_BANK__PI296_H_
#define VERILATED_VSIM_PRIM_GENERIC_FLASH_BANK__PI296_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_prim_generic_flash_bank__pi296 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(rd_i,0,0);
        VL_IN8(prog_i,0,0);
        VL_IN8(prog_last_i,0,0);
        VL_IN8(prog_type_i,0,0);
        VL_IN8(pg_erase_i,0,0);
        VL_IN8(bk_erase_i,0,0);
        VL_IN8(erase_suspend_req_i,0,0);
        VL_IN8(he_i,0,0);
        VL_IN8(part_i,0,0);
        VL_IN8(info_sel_i,1,0);
        VL_OUT8(ack_o,0,0);
        VL_OUT8(done_o,0,0);
        VL_IN8(init_i,0,0);
        VL_OUT8(init_busy_o,0,0);
        VL_IN8(flash_power_ready_h_i,0,0);
        VL_IN8(flash_power_down_h_i,0,0);
        CData/*2:0*/ __PVT__st_q;
        CData/*2:0*/ __PVT__st_d;
        CData/*0:0*/ __PVT__time_cnt_inc;
        CData/*0:0*/ __PVT__time_cnt_clr;
        CData/*0:0*/ __PVT__time_cnt_set1;
        CData/*0:0*/ __PVT__index_cnt_inc;
        CData/*0:0*/ __PVT__index_cnt_clr;
        CData/*0:0*/ __PVT__prog_pend_q;
        CData/*0:0*/ __PVT__prog_pend_d;
        CData/*0:0*/ __PVT__mem_req;
        CData/*0:0*/ __PVT__mem_wr;
        CData/*0:0*/ __PVT__pop_cmd;
        CData/*0:0*/ __PVT__mem_rd_q;
        CData/*0:0*/ __PVT__mem_rd_d;
        CData/*0:0*/ __PVT__rd_req;
        CData/*0:0*/ __PVT__prog_req;
        CData/*0:0*/ __PVT__pg_erase_req;
        CData/*0:0*/ __PVT__bk_erase_req;
        CData/*0:0*/ __PVT__rd_part_q;
        CData/*1:0*/ __PVT__info_sel_q;
        CData/*0:0*/ __PVT__unnamedblk1__DOT__flash_rand_delay_en;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__wready_o;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__full_o;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*1:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
        CData/*1:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set;
        CData/*0:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set;
        CData/*0:0*/ __PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i;
        CData/*0:0*/ __PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths;
        CData/*0:0*/ __PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i;
        CData/*0:0*/ __PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths;
        CData/*0:0*/ __PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i;
        CData/*0:0*/ __PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths;
        CData/*0:0*/ __PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__req_i;
        CData/*0:0*/ __PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__show_mem_paths;
        VL_IN16(addr_i,15,0);
        SData/*15:0*/ __PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__addr_i;
        VL_INW(prog_data_i,75,0,3);
        VL_OUTW(rd_data_o,75,0,3);
        IData/*31:0*/ __PVT__ReadLatency;
    };
    struct {
        IData/*31:0*/ __PVT__ProgLatency;
        IData/*31:0*/ __PVT__EraseLatency;
        IData/*31:0*/ __PVT__time_cnt;
        IData/*31:0*/ __PVT__index_cnt;
        IData/*31:0*/ __PVT__index_limit_q;
        IData/*31:0*/ __PVT__index_limit_d;
        IData/*31:0*/ __PVT__time_limit_q;
        IData/*31:0*/ __PVT__time_limit_d;
        VlWide<3>/*75:0*/ __PVT__mem_wdata;
        VlWide<3>/*75:0*/ __PVT__rd_data_q;
        VlWide<3>/*75:0*/ __PVT__rd_data_d;
        VlWide<3>/*75:0*/ __PVT__rd_data_main;
        VlWide<3>/*75:0*/ __Vcellout__gen_info_types__BRA__0__KET____DOT__u_info_mem__rdata_o;
        VlWide<3>/*75:0*/ __Vcellout__gen_info_types__BRA__1__KET____DOT__u_info_mem__rdata_o;
        VlWide<3>/*75:0*/ __Vcellout__gen_info_types__BRA__2__KET____DOT__u_info_mem__rdata_o;
        VlWide<4>/*100:0*/ __PVT__u_cmd_fifo__DOT__rdata_o;
        VlWide<7>/*201:0*/ __PVT__u_cmd_fifo__DOT__gen_normal_fifo__DOT__storage;
        VlWide<4>/*100:0*/ u_cmd_fifo__DOT____Vlvbound_hf36c3c57__0;
        IData/*31:0*/ __PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i;
        VlWide<3>/*75:0*/ u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h443737f7__0;
        IData/*31:0*/ __PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i;
        VlWide<3>/*75:0*/ gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0;
        VlWide<3>/*75:0*/ gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0;
        IData/*31:0*/ __PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i;
        VlWide<3>/*75:0*/ gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0;
        VlWide<3>/*75:0*/ gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0;
        IData/*31:0*/ __PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
        IData/*31:0*/ __PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i;
        VlWide<3>/*75:0*/ gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h55d60b38__0;
        VlWide<3>/*75:0*/ gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT____Vlvbound_h170dd63a__0;
        VlUnpacked<VlWide<3>/*75:0*/, 65536> u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem;
        VlUnpacked<VlWide<3>/*75:0*/, 2560> __PVT__gen_info_types__BRA__0__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem;
        VlUnpacked<VlWide<3>/*75:0*/, 2560> __PVT__gen_info_types__BRA__1__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem;
        VlUnpacked<VlWide<3>/*75:0*/, 2560> __PVT__gen_info_types__BRA__2__KET____DOT__u_info_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_prim_generic_flash_bank__pi296(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_prim_generic_flash_bank__pi296();
    VL_UNCOPYABLE(Vsim_prim_generic_flash_bank__pi296);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

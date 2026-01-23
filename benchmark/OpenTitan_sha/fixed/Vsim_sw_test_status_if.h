// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SW_TEST_STATUS_IF_H_
#define VERILATED_VSIM_SW_TEST_STATUS_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_sw_test_status_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(fetch_en,0,0);
    VL_IN8(wr_valid,0,0);
    CData/*0:0*/ __PVT__in_terminal_state;
    CData/*0:0*/ sw_test_done;
    CData/*0:0*/ sw_test_passed;
    VL_IN16(data,15,0);
    SData/*15:0*/ __PVT__sw_test_status;
    SData/*15:0*/ __PVT__sw_test_status_prev;
    VL_IN(addr,31,0);
    IData/*31:0*/ sw_test_status_addr;
    IData/*31:0*/ __PVT__num_iterations;

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_sw_test_status_if(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_sw_test_status_if();
    VL_UNCOPYABLE(Vsim_sw_test_status_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsim_sw_test_status_if* obj);

#endif  // guard

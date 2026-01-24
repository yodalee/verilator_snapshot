// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_OTP_CTRL_PART_PKG_H_
#define VERILATED_VSIM_OTP_CTRL_PART_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_otp_ctrl_part_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*33:0*/, 11> PartInfo = {{
        0x0000000000010050ULL, 0x000000000805c054ULL,
        0x00000000360b2054ULL, 0x000000008f076054ULL,
        0x00000000ca00a054ULL, 0x00000001cf012034ULL,
        0x00000001d8004034ULL, 0x00000001da00a0bcULL,
        0x00000001df0161bcULL, 0x00000001ea0162beULL,
        0x00000002f5016004ULL
    }};

    // CONSTRUCTORS
    Vsim_otp_ctrl_part_pkg(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_otp_ctrl_part_pkg();
    VL_UNCOPYABLE(Vsim_otp_ctrl_part_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

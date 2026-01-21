// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSIM__DPI_H_
#define VERILATED_VSIM__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at verilogSourceFiles/tb.sv:166:32
    extern void mem_access(svBit req_rw, unsigned long long req_byteen, unsigned long long req_addr, const svBitVecVal* req_data, svBitVecVal* rsp_data);
    // DPI import at verilogSourceFiles/tb.sv:55:31
    extern svBit mem_check(const char* fileName, svBit verbose);
    // DPI import at verilogSourceFiles/tb.sv:54:32
    extern void mem_load(const char* fileName);

#ifdef __cplusplus
}
#endif

#endif  // guard

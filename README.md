# About this repo

An experiment to rewrite `fstapi.c` for better Verilator simulation speed.

# Prerequisite

Clone the [libfstpp](https://github.com/johnjohnlin/libfstpp) in the path `external`.

# Project structure
Common code is under `src/`, and all the benchmark code are under `benchmark/`

* `src/gtkwave`:  Original fstapi C implementation from GtkWave.
* `src/verilatorshare`: The snapshot of files to built a verilator project. Copied from version 5.042.
* `benchmark/`: The directory of overall benchmark cases and test cases
* `benchmark/*/fixed`: The verilated cpp code, generated from verilog code using Verilator 5.0.42
* `benchmark/*/firmware`: The firmware that are required to run the firmware

# How to run
I have snapshot the Verilator output, and you just need to follow the standard cmake process. No Verilator is needed at all. You need a C++20 compiler as Verilator --timing needs it.

```
cmake -B build src -DCMAKE_BUILD_TYPE=Release
cd build
make -j $(nproc)
```

Build the testbench you would like to run
```
make ${benchmark}
make ${benchmark}_gtkwave
```

Run the case under their directory, with option to disable/enable fst file dumping.
```
cd ${benchmark}
./${benchmark} 0         # No FST version
./${benchmark}_gtkwave 1 # gtkwave version
./${benchmark} 1         # cpp FST version
```

# Reference

Please refer to the [unofficial document](https://blog.timhutt.co.uk/fst_spec/) of the fst waveform specification

# Profiling results

We collect the following benchmark:
1. [picorv32](https://github.com/YosysHQ/picorv32)
2. [Vortex:mini:sgemm](https://github.com/vortexgpgpu/vortex) from [rtlmeter](https://github.com/verilator/rtlmeter)
3. [OpenTitan:default:sha](https://github.com/lowRISC/opentitan) from [rtlmeter](https://github.com/verilator/rtlmeter)
5. [NVDLA:default:gnet](https://github.com/nvdla/hw) from [rtlmeter](https://github.com/verilator/rtlmeter)

## Benchmarks

### Hardware 1

* CPU: AMD Ryzen 9 7950X
* `CMAKE_BUILD_TYPE`: Release mode
* Commit: `20c43597` / 20260125

Cell is the runtime (ms).

| Benchmark           |  No FST (A) | GtkWave FST (B) | This FST (C) | Speedup(B-A)/(C-A) |
|:--------------------|------------:|----------------:|-------------:|-------------------:|
| picorv32            |        72.3 |          1492.2 |        489.6 |              3.40x |
| vortex:mini:sgemm   |      7436.3 |         44871.8 |      31336.3 |              1.57x |
| OpenTitan:sha       |     96603.1 |        193932.0 |     166178.0 |              1.40x |
| NVDLA:gnet          |     46930.4 |        244540.1 |     226628.9 |              1.10x |

### Hardware 2

* CPU: AMD Ryzen 7 3700X
* `CMAKE_BUILD_TYPE`: Release mode
* Commit: `20c4359` / 20260125

Cell is the runtime (ms).

| Benchmark           |  No FST (A) | GtkWave FST (B) | This FST (C) | Speedup (B-A)/(C-A) |
|:--------------------|------------:|----------------:|-------------:|--------------------:|
| picorv32            |         138 |            1799 |          794 |               2.53x |
| vortex:mini:sgemm   |       15245 |           64769 |        51064 |               1.38x |
| OpenTitan:sha       |      139145 |          273607 |       239187 |               1.34x |
| NVDLA:gnet          |      132765 |          442881 |       391804 |               1.19x |

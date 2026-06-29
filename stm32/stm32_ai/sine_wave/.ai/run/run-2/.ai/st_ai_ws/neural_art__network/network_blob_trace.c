#include "ll_aton_NN_interface.h"
#include "ll_aton.h"
#include "ll_aton_ec_trace.h"

#if 0
// Workaround: the tracer does not know the target at this moment
// and cannot call the functions since are used in static code
#define ATON_LIB_PHYSICAL_TO_VIRTUAL_ADDR(address) LL_Address_Physical2Virtual(address)
#define ATON_LIB_VIRTUAL_TO_PHYSICAL_ADDR(address) LL_Address_Virtual2Physical(address)
#else
#define ATON_LIB_PHYSICAL_TO_VIRTUAL_ADDR(address) (address)
#define ATON_LIB_VIRTUAL_TO_PHYSICAL_ADDR(address) (address)
#endif

#define _mem_pool_xSPI2_network 1

// MCU cache line size: 32 (bytes)
// NPU cache line size: 64 (bytes)
// MCU+NPU cache line size equal to 64 bytes (power of 2 not less than 8)
unsigned int cache_line_size = 64;

mpool_reloc_info_t mpool_reloc_info[] = {
  {"AXISRAM6", "_mem_pool_AXISRAM6_network", 0x34350000, 1, 0},
  {"AXISRAM5", "_mem_pool_AXISRAM5_network", 0x342e0000, 1, 0},
  {"AXISRAM4", "_mem_pool_AXISRAM4_network", 0x34270000, 1, 0},
  {"AXISRAM3", "_mem_pool_AXISRAM3_network", 0x34200000, 1, 0},
  {"AXISRAM2", "_mem_pool_AXISRAM2_network", 0x34100000, 1, 0},
  {"AXISRAM1", "_mem_pool_AXISRAM1_network", 0x34064000, 1, 0},
  {"AXIFLEXMEM", "_mem_pool_AXIFLEXMEM_network", 0x34000000, 1, 0},
  {"xSPI1", "_mem_pool_xSPI1_network", 0x90000000, 1, 0},
  {"xSPI2", "_mem_pool_xSPI2_network", 0x1, 0, 0},
  {"AXISRAM2_AXISRAM3_AXISRAM4_AXISRAM5_AXISRAM6", "_mem_pool_AXISRAM2_AXISRAM3_AXISRAM4_AXISRAM5_AXISRAM6_network", 0x34100000, 1, 0},
  {NULL, NULL, 0, 0, 0}
};


void trace_ec__ec_blob_network_1(void) {
  ec_trace_start_blob("_ec_blob_network_1");
  ec_trace_start_epoch(1);
  {
  }
  {
  }
  ec_trace_end_epoch(1);
  ec_trace_end_blob("_ec_blob_network_1");
}

void trace_ec__ec_blob_network_3(void) {
  ec_trace_start_blob("_ec_blob_network_3");
  ec_trace_start_epoch(3);
  {
  }
  {
  }
  ec_trace_end_epoch(3);
  ec_trace_end_blob("_ec_blob_network_3");
}

void trace_ec__ec_blob_network_6(void) {
  ec_trace_start_blob("_ec_blob_network_6");
  ec_trace_start_epoch(6);
  {
  }
  {
  }
  ec_trace_end_epoch(6);
  ec_trace_end_blob("_ec_blob_network_6");
}

void trace_ec__ec_blob_network_8(void) {
  ec_trace_start_blob("_ec_blob_network_8");
  ec_trace_start_epoch(8);
  {
  }
  {
  }
  ec_trace_end_epoch(8);
  ec_trace_end_blob("_ec_blob_network_8");
}

void trace_ec__ec_blob_network_11(void) {
  ec_trace_start_blob("_ec_blob_network_11");
  ec_trace_start_epoch(11);
  {
  }
  {
  }
  ec_trace_end_epoch(11);
  ec_trace_end_blob("_ec_blob_network_11");
}

void trace_ec__ec_blob_network_13(void) {
  ec_trace_start_blob("_ec_blob_network_13");
  ec_trace_start_epoch(13);
  {
  }
  {
  }
  ec_trace_end_epoch(13);
  ec_trace_end_blob("_ec_blob_network_13");
}


int main () {
  ec_trace_init("network_ecblobs.h", "network", false, 0, false);
  trace_ec__ec_blob_network_1();
  trace_ec__ec_blob_network_3();
  trace_ec__ec_blob_network_6();
  trace_ec__ec_blob_network_8();
  trace_ec__ec_blob_network_11();
  trace_ec__ec_blob_network_13();
  ec_trace_all_blobs_done();
}

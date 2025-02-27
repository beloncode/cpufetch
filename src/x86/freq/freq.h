#ifndef __FREQ__
#define __FREQ__

#include <stdint.h>
#include "../../common/cpu.h"

#define MEASURE_TIME_SECONDS         5
#define LOOP_ITERS           100000000

int64_t measure_frequency(struct cpuInfo* cpu);

#endif

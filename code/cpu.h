#pragma once

#include "amstrad_cpc.h"

#define MEMORY_SIZE 64 * 1024 // 64K CPC 464

extern uint8 Memory[MEMORY_SIZE];

void CPU_Cycle(void);
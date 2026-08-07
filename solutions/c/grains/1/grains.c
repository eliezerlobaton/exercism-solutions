#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index) {
  if (index < 1 || index > 64)
    return 0;

  uint64_t grains = 1;
  for (uint8_t i = 1; i < index; i++)
    grains <<= 1;
  return grains;
}

uint64_t total(void) { return UINT64_MAX; }

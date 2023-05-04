#include "main.h"

void clear_bit(unsigned int *num, int index) {
    unsigned int mask = ~(1 << index);
    *num &= mask;
}

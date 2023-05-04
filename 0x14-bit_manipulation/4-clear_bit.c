#include "main.h"

void set_bit(unsigned int *num, int index) {
    unsigned int mask = 1 << index;
    *num |= mask;
}

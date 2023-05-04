#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int i, count = 0;
    unsigned long int c;
    unsigned long int e=n^m;

    for (i = 63; i >= 0; i--)
        {
            c = e >> i;
            if (c & 1)
            count++;
    }
    return (count);
}

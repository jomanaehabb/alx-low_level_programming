#include "main.h"

int set_bit(unsigned long int *n, unsigned int i)
{
	if(i > 63){
		return (-1);
	}
	*n = ((1UL << i) | *n);
	return (1);
}

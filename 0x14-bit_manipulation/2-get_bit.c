#include "main.h"
#include <stdio.h>
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}

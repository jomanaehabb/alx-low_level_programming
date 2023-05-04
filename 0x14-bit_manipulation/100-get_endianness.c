#include "main.h"

int get_endianness(void)
{
	unsigned int i = 1;
	char *crr = (char *) &i;

	return (*crr);
}

#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	n >>= index;

	return (mask & n);

}

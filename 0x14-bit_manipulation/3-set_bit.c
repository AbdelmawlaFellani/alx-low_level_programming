#include "main.h"

/**
 * set_bit - sets the bit at a given index in an unsigned long integer to 1
 *
 * @n: pointer to the unsigned long integer to modify
 * @index: index of the bit to set (0 indexed from right to left)
 *
 * Return: 0 if successful, or -1 if the index is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	*n |= mask;

	return (1);
}

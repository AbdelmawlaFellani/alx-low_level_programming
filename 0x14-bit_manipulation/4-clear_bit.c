#include "main.h"
/**
 * clear_bit - sets the bit at a given index in an unsigned long integer to 0
 *
 * @n: pointer to the unsigned long integer to modify
 * @index: index of the bit to clear (0 indexed from right to left)
 *
 * Return: 0 if successful, or -1 if the index is out of range
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}

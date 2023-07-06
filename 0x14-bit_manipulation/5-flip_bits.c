#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped to convert
 * one number to another
 *
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 *
 * Return: the number of bits that must be flipped in @n to get @m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		count += mask & 1;
		mask >>= 1;
	}
	return (count);
}

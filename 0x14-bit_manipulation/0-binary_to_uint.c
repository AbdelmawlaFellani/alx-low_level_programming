#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: pointer to the string of 0 and 1 chars
 *
 * Return: the Converted number
 * or 0 in case the char pointed to isn't 1 or 0
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			number <<= 1;
			number += *b - '0';
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}

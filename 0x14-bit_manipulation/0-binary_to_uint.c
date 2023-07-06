#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to the binary number input as string
 *
 * Return: the converted number, 0 in case not a
 * binary number ( 0 or 1 ) or in case of b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			num <<= 1;
			num += *b - '0';
			b++;
		}
		else
			return (0);
	}
	return (num);
}

#include "main.h"

/**
 * get_endianness - Checks the endianness of a system
 *
 * Return: 1 if little endian, 0 otherwise (big endian)
 */
int get_endianness(void)
{
	int n = 1; 
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}

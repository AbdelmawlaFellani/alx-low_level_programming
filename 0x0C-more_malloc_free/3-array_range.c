#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area with @c
 *
 * @s: pointer to the starting memory location where the value will be set
 * @c: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: pointer to the memory block
 */
void *_memset(void *s, int c, unsigned int n)
{
	unsigned int len = 0;
	int *ps = s;

	while (len < n)
	{
		*ps++ = c++;
		len += sizeof(int);
	}
	return (s);
}
/**
 * array_range -  creates an array of integers.
 *
 * @min: minimum integer value provided
 * @max: maximum integer value provided
 *
 * Return: pointer to an array of integers starting from @min to @max
 */
int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
		return (NULL);

	_memset(p, min, sizeof(int) * ((max - min) + 1));

	return (p);
}

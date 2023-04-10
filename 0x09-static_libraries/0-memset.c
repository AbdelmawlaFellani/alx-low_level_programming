#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area with @b
 *
 * @s : string input
 * @b : character Input to fill memory area
 * @n : number of bytes from memory area
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;
	char *ps = s;

	while (len < n)
	{
		*ps++ = b;
		len++;
	}
	return (s);
}

#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest : destination to paste the copy
 * @src : source to copy from
 * @n : number of bytes we want to copy
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	unsigned int l = 0;

	while (l < n)
	{
		*pdest++ = *src++;
		l++;
	}


	return (dest);
}

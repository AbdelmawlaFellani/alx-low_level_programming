#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
/**
 * __memcpy- copies memory area.
 * @dest: estination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *__memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = src;
	char *pdest = dest;

	while (n > 0)
	{
		*pdest++ = *psrc++;
		n--;
	}

	return (dest);
}

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the old memory
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to new allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (!p)
		return (NULL);
	if (new_size < old_size)
		__memcpy(p, ptr, new_size);
	else
		__memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}

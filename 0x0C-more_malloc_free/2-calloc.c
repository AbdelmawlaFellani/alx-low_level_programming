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
	char *ps = s;

	while (len < n)
	{
		*ps++ = c;
		len++;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: is the size of memory we want to allocate
 * @size: is the size of the type we want to allocate
 *
 * Return: pointer to this allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (!p)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}

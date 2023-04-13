#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: is the size of the memory we want to allocate
 *
 * Return: pointer to the allocated memory, 98 in case of faillure
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

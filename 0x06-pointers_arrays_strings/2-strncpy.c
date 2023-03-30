#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: string destination the result of the copy
 * @src: string source we copy from
 * @n: number of byte that we want to copy
 *
 * Return: string with the copied @n bytes from @src
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp_src = src;
	char *res_dest = dest;

	while (n > 0 && *tmp_src != '\0')
	{
		*dest++ = *tmp_src++;
		n--;
	}
	while (n > 0 && *dest != '\0')
	{
		*dest++ = '\0';
		n--;
	}
	return (res_dest);
}

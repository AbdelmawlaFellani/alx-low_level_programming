#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: the first string
 * @src: the second string that gonna get added to the first
 *
 * Return: concatenated string (@dest + @src)
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	return (res);
}

#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: its the string that gonna recive the copy
 * @src: is the String that gonna get copied
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}

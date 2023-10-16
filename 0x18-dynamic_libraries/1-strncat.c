#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 * @n: number of characters to concate from 2nd string to the 1st string
 *
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 &&  *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (res);
}

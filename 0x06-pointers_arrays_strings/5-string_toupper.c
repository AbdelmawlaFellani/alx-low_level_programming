#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 *
 * @a: pointer to string
 *
 * Return: pointer to uppercase str
 */
char *string_toupper(char *a)
{
	char *str = a;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (a);
}

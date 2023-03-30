#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 *
 * @s: pointer to a string
 *
 * Return: pointer to a all cap string
 */
char *cap_string(char *s)
{
	char *str = s;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			if (*(str - 1) == '\n' || *(str - 1) == '\t'
					|| *(str - 1) == ' ' || *(str - 1) == '.')
				*str -= 32;
		str++;
	}
	return (s);
}

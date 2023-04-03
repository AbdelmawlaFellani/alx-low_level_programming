#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s : the String input
 * @c : the character input
 *
 * Return: pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

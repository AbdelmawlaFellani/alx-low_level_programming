#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: a pointer to the string to be searched.
 * @accept: a pointer to a null-terminated string containing the set
 * of characters to search for within the string.
 *
 * Return: a pointer to the first occurrence of any character in the set of
 * characters within the string, or NULL if none of the characters
 * in the set are found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *pacc;

	while (*s)
	{
		pacc = accept;
		while (*pacc)
		{
			if (*s == *pacc)
			{
				return (s);
			}
			pacc++;
		}
		s++;
	}
	return (NULL);
}

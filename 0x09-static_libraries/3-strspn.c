#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : A pointer to the string to be searched.
 * @accept :A pointer
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *pacc;

	while (*s)
	{
		pacc = accept;

		while (*pacc)
		{
			if (*s == *pacc)
			{
				count++;
				break;
			}
			pacc++;
		}

		if (!*pacc)
		{
			break;
		}

		s++;
	}

	return (count);
}

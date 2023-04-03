#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : A pointer to the string to be searched.
 * @accept :A pointer to a null-terminated string containing the set of characters to be matched.
 * 
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept.
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

	return count;
}

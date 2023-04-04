#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack : a pointer to the string to be searched.
 * @needle :  a pointer to the substring to search for within the string.
 *
 * Return: pointer to the first occurrence of the substring within the string,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *pneedle = needle;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			haystack++;
			needle++;
			if (*needle == '\0')
			{
				return (haystack - (needle - pneedle));
			}
		}
		else
		{
			needle = pneedle;
			haystack++;
		}
	}
	return (NULL);
}

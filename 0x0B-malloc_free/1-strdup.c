#include "main.h"

/**
 * _strdup - that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str : the String which gonna get copied
 *
 * Return: NULL if @str is null or insufficient memory,
 * pointer to the duplicate string (Success)
 */
char *_strdup(char *str)
{
	char *s, *ps;
	int len = 0;

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(str) * (len + 1));
	ps = s;
	if (!ps && str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		*s++ = *str++;
	}
	*s = '\0';
	return (ps);
}

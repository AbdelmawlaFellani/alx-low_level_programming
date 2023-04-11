#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _create_array -  creates an array
 *
 * @size: size of the array
 *
 * Return: NULL if size = 0 , pointer to array or NULL if fails
 */
char *_create_array(unsigned int size)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	return (arr);
}

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

	if (str == NULL)
		return (NULL);

	s = _create_array(_strlen(str) + 1);
	ps = s;
	if (!s)
		return (NULL);

	while (*str != '\0')
	{
		*ps++ = *str++;
	}
	*ps = '\0';

	return (s);
}

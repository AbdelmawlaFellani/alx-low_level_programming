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
 * str_concat - concatenates two strings.
 *
 * @s1: first String
 * @s2: second String
 *
 * Return: NULL (Faillure),pointer to a String (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *str_res;
	int i = 0, j = 0;
	str_res = _create_array(_strlen(s1) + _strlen(s2) + 1);

	while (i < _strlen(s1))
	{
		*(str_res + i) = *(s1 + i);
		i++;
	}
	while (j < _strlen(s2))
	{
		*(str_res + i) = *(s2 + j);
		j++;
		i++;
	}
	*(str_res + i) = '\0';
	return (str_res);
}

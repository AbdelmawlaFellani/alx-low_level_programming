#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);
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
 * string_nconcat - 
 *
 * @s1: first String
 * @s2: second String
 * @n: number of bytes to concat from @s2
 *
 * Return: pointer contains s1 + first n bytes of @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, j = 0, i = 0;
	char *res_str;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (n >= l2)
		n = l2;
	res_str = _create_array(l1 + n + 1);

	if (!res_str)
		return (NULL);

	while (i < l1)
	{	
		res_str[i] = s1[i];
		i++;
	}
	
	while (j < n)
	{
		res_str[i] = s2[j];
		i++;
		j++;
	}

	res_str[i] = '\0'; 
	return (res_str);

}

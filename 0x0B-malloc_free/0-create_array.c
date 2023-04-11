#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: size of the array
 * @c : the character that gonna get initialized in the array
 *
 * Return: NULL if size = 0 , pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	if (arr)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	}
	else
		return (NULL);
	return (arr);
}

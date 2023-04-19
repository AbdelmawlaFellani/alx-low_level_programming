#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: callback function
 *
 * Return: 0 if index found and -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i;
	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			index = i;
			return (index);
		}
	}
	return (-1); 
}

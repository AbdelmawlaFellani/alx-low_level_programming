#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: integer input
 * @height: integer input
 *
 * Return: NULL on faillure or one of params @height,@width is 0 or negative,
 * pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, **arr;

	if (width == 0 && height == 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	i = 0;
	if (!arr)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		j = 0;
		if (!arr[i])
		{
			for (k = 0; k < i; k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}

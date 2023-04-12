#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function.
 *
 * @grid : the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{	
		free(grid[i]);
	}
}

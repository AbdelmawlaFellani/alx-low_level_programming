#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: Input size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= i && j <= size)
				_putchar('#');
			if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
}

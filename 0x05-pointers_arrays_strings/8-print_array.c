#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: s the number of elements of the array to be printed
 * @a: the Array provided
 *
 * Return : void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i != n)
			printf(", ");
	}
	printf("\n");
}

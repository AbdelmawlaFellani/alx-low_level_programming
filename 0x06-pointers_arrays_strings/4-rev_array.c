#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a: array
 * @n: number of elements on array
 *
 * Return: reversed array(@a) printed (void)
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n / 2)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = tmp;
		i++;
	}
}

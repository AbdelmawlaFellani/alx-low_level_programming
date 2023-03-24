#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int count = 0, i, j, k;

	while (count < 10)
	{
		i = '0', j = 0, k = '1';

		while (j < 15)
		{
			if (j == 10)
			{
				i = '0';
			}
			if (j > 9)
				_putchar(k);
			_putchar(i);
			i++;
			j++;
		}
		_putchar('\n');
		count++;
	}
}

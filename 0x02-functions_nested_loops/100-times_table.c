#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the @param times table, starting with 0
 *
 * @n: the parametre to decide which times table we want
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, val;

	for (i = 0; i < n && (n < 15 && n >= 0); i++)
	{
		for (j = 0; j < n; j++)
		{
			val = i * j;
			if (val > 9)
			{
				if (val > 99)
				{
					_putchar((val / 100) + '0');
				}
				_putchar((val / 10) % 10 + '0');
				_putchar(val % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(val + '0');
			}
			if (j < n)
			{
				_putchar(' ');
				if (val / 100 == 0  || val >= 99)
				{
					_putchar(' ');
					if ((i * (j + 1)) / 100 == 0)
					{
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}

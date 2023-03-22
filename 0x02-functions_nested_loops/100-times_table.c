#include "main.h"
#include <stdio.h>

/**
 * Step1 - is a condition made it cuz betty didnt stop complaining
 *
 * @i: same as i in our print_times_table
 *
 * @j: same as j in our print_times_table
 *
 * @val: same as val in our print_times_table
 *
 * Return: void
 */
void Step1(int i, int j, int val)
{
	{
		_putchar(44);
		if (val / 100 == 0 || val >= 99)
		{
			_putchar(32);
			if ((i * (j + 1)) / 100 == 0)
				_putchar(32);
		}
	}
}

/**
 * print_times_table - prints the @param times table, starting with 0
 *
 * @n: the parametre to decide which times table we want
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i = 0, val, j;

	if (n <= 15 && n > 0)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				val = j * i;
				if (val > 9)
				{
					if (val > 99)
						_putchar((val / 100) + '0');
					_putchar((val / 10) % 10 + '0');
					_putchar((val % 10) + '0');
				}
				else
				{
					if (j != 0)
						_putchar(32);
					_putchar(val + '0');
				}
				if (j < n)
					Step1(i, j, val);
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j;
	int val;
	int tmp;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			val = j * i;
			if (val > 9)
			{
				if (j < 10 && j > 0)
				{
					_putchar(44);
					_putchar(32);
				}
				tmp = val / 10;
				_putchar((tmp % 10) + '0');
				_putchar((val % 10) + '0');
			}
			else
			{
				if (j < 10 && j > 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar((j * i) + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}

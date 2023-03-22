#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: void
 */
void jack_bauer(void)
{
	int d1 = 0;
	int d2 = 0;
	int d3;
	int d4;
	int l2;

	while (d1 <= 2)
	{
		d2 = 0;
		if (d1 == 2)
			l2 = 3;
		else
			l2 = 9;

		while (d2 <= l2)
		{
			d3 = 0;
			while (d3 < 6)
			{
				d4 = 0;
				while (d4 <= 9)
				{
					_putchar(d1 + '0');
					_putchar(d2 + '0');
					_putchar(58);
					_putchar(d3 + '0');
					_putchar(d4 + '0');
					_putchar('\n');
					d4++;
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}
}

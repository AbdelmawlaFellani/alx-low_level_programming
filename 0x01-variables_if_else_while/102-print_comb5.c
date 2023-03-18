#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			c = a;
			d = b + 1;
			while (c <= 57)
			{
				while (d <= 57)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if ((a != 57) || (b != 56) || (c != 57) || (d != 57))
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
	}
	putchar('\n');
	return (0);
}

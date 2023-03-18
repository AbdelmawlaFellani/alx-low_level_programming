#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b;
	int c;
	int d;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = a;
			while (c < 58)
			{
				d = b + 1;
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if(b != 56 || a != 57)
					{
						putchar(44);
						putchar(32);
					}
					else
						putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}

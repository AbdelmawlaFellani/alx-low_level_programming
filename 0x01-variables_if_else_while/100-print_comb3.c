#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m = 48;

	while (m < 58)
	{
		n = m + 1;
		while (n < 58)
		{
			putchar(m);
			putchar(n);
			if (m != 56)
			{
				putchar(44);
				putchar(32);
			}
			else
				putchar('\n');
			n++;
		}
		m++;
	}
	return (0);
}

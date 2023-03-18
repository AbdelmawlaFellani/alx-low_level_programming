#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c1 = 48;
	int c2 = 48;
	int c3 = 48;
	int c4 = 48;

	while (c1 <= 57)
	{
		while (c2 <= 57)
		{
			c3 = c1;
			c4 = c2 + 1;
			while (c3 <= 57)
			{
				while (c4 <= 57)
				{
					putchar(c1);
					putchar(c2);
					putchar(32);
					putchar(c3);
					putchar(c4);
					if ((c1 != 57) || (c2 != 56) || (c3 != 57) || (c4 != 57))
					{
						putchar(44);
						putchar(32);
					}
					c4++;
				}
				c3++;
				c4 = 48;
			}
			c2++;
			c3 = 48;
		}
		c1++;
		c2 = 48;
	}
	putchar('\n');
	return (0);
}

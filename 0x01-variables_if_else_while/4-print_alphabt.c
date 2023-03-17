#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a <= 123)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		else if (a != 123)
			putchar(a);
		else
		{
			putchar('\n');
		}
		a++;
	}
	return (0);
}

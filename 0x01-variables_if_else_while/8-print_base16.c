#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 103)
	{
		if (i == 58)
		{
			i = 97;
			putchar(i);
		}
		else if (i == 103)
			putchar('\n');
		else
			putchar(i);
		i++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 58)
	{
		if (i == 58)
			putchar('\n');
		else
			putchar(i);
		i++;
	}
	return (0);
}

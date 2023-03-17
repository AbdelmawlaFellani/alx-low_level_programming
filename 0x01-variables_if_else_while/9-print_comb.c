#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{

		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
			putchar('\n');
		i++;
	}
	return (0);
}

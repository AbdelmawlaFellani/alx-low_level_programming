#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int zAscii = 122;

	while (zAscii >= 96)
	{
		if (zAscii == 96)
			putchar('\n');
		else
			putchar(zAscii);
		zAscii--;
	}
	return (0);
}

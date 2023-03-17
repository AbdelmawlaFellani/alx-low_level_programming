#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int aAsciiCode = 97;
	int i = 0;

	while (i <= 26)
	{
		if (i != 26)
			putchar(aAsciiCode);
		else
			putchar('\n');
		i++;
		aAsciiCode++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int aAscii = 97;
	int AAscii = 65;
	int i = 0;
	int j = 0;

	while (i <= 26)
	{
		if (i != 26)
			putchar(aAscii);
		else
		{
			while (j <= 26)
			{
				if (j != 26)
					putchar(AAscii);
				else
					putchar('\n');
				j++;
				AAscii++;
			}
		}
		i++;
		aAscii++;
	}
	return (0);
}

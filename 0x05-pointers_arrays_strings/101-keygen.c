#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * desc: generate valid Passwords
 * sum of the Password should be equal to 0xad4(HEX) == 2772(DEC)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int MAX_SUM = 2772, sum = 0, ascii = MAX_SUM - 127;

	srand(time(0));

	while (sum <= ascii)
	{
		char c = (char)(rand() % 128);

		sum += c;
		putchar(c);
	}

	putchar(MAX_SUM - sum);

	return (0);
}

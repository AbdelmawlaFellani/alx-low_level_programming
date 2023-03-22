#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: a paramatre that we gonna use later xdd
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = 98;

	if (n > i)
		while (n >= i)
		{
			if (n != 98)
			{
			printf("%d, ", n);
			}
			else
				printf("%d\n", n);
			n--;
		}
	else if (n < i)
		while (n <= i)
		{
			if (n != 98)
			{
			printf("%d, ", n);
			}
			else
				printf("%d\n", n);
			n++;
		}
	else
		printf("%d\n", n);
}

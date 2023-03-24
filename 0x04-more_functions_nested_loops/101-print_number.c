#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: input the number we want to print
 *
 * Return: void
 */
void print_number(int n)
{
	int val = n;

	if (val < 0)
	{
		_putchar('-');
		val = -n;
	}
	if (val / 10)
	{
		print_number(val / 10);
	}
	_putchar(val % 10 + '0');
}

#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n : is the number provided that we will check its sign
 *
 * Return: 1 if positive, 0 if equals '0', -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

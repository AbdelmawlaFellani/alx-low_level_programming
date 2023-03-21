#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number we want to get his last digit
 *
 * Return: int a value of the last digit of our param
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
		res *= -1;

	_putchar(res + '0');
	return (res);
}

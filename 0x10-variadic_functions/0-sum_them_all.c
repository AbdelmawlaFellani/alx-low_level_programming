#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number Input of argument will be provided
 *
 * Return: 0 in case @n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	va_list numbers;
	
	if (n == 0)
		return (0);

	va_start(numbers, n);

	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}

	va_end(numbers);

	return (sum);
}	

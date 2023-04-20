#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints Numbers
 *
 * @separator: a string to be printed between the args
 * @n: is the Number of the args will be provided
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}

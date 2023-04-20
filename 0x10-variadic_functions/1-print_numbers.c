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
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	while (i < n - 1)
	{
		if (separator)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
		i++;
	}

	printf("%d\n", va_arg(args, int));

	va_end(args);

}

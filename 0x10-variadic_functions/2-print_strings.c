#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints Strings
 *
 * @separator: a string to be printed between args (Strings)
 * @n: number of Input arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s, *arg;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char*);

		(arg ? (s = arg) : (s = "(nil)"));

		if (i != 0 && separator)
			printf("%s", separator);
		printf("%s", s);
	}

	va_end(args);

	printf("\n");
}

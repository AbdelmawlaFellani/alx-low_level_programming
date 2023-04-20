#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *sep = "";
	int i = 0, int_val;
	char char_val, *str_val, *s;
	float float_val;

	va_start(args, format);

	if (format)
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				char_val = va_arg(args, int);
				printf("%s%c", sep, char_val);
				break;
			case 's':
				str_val = va_arg(args, char*);
				(str_val ? (s = str_val) : (s = "(nil)"));
				printf("%s%s", sep, s);
				break;
			case 'i':
				int_val = va_arg(args, int);
				printf("%s%d", sep, int_val);
				break;
			case 'f':
				float_val = va_arg(args, double);
				printf("%s%f", sep, float_val);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

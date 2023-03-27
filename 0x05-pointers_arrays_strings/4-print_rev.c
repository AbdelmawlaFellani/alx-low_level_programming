#include "main.h"

/**
 * print_rev - that prints a string, in reverse
 *
 * @s: String provided to get reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *e = s;

	while (*e != '\0')
	{
		e++;
	}

	e -= 1;
	while (e >= s)
	{
		_putchar(*e);
		e--;
	}
	_putchar('\n');
}

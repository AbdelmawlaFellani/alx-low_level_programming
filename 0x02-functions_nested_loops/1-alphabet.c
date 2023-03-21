#include "main.h"

/**
 * print_alphabet - 'prints Alphabet'
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

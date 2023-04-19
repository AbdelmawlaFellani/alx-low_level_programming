#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: string input
 * @f: callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

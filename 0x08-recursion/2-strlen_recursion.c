#include "main.h"

/**
 * _strlen_recursion - length of a string.
 *
 * @s: String input
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

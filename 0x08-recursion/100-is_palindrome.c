#include "main.h"

int cmp(char *s, int i, int l);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is palindrome.
 *
 * @s: is the string input we gonna check if palindrome
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (cmp(s, 0, _strlen_recursion(s)));
}

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

/**
 * cmp - a function where compare the charcters
 *
 * @s: the string we want to compare its characters
 * @i: is the first charcter on the string
 * @l: contains the length of String
 *
 * Return: 1 if they are all equal and 0 if they are not.
 */
int cmp(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l / 2)
		return (1);

	return (cmp(s, i + 1, l - 1));
}

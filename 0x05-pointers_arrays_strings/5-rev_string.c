#include "main.h"

/**
 * rev_string - Reverses a String.
 *
 * @s: the String we want to reverse.
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *e = s;
	char tmp;

	while (*e != '\0')
	{
		e++;
	}
	e -= 1;
	while (e >= s)
	{
		tmp = *e;
		*e = *s;
		*s = tmp;
		e--;
		s++;
	}
}

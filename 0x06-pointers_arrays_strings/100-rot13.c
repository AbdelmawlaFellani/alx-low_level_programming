#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: pointer to a string
 *
 * Return: a new crypted string with the rot13
 */
char *rot13(char *s)
{
	char *str = s, *pa, *pr;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *r = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str)
	{
		pa = a;
		pr = r;
		while (*pa)
		{
			if (*str == *pa)
			{
				*str = *pr;
				break;
			}
			pa++;
			pr++;
		}
		str++;
	}

	return (s);
}

#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 *
 * @s: the String that gonna get converted
 *
 * Return: void
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	const char *p = s;

	while (*p && (*p < '0' || *p > '9'))
	{
		if (*p == '-')
			sign *= -1;
		p++;
	}

	while (*p >= '0' && *p <= '9')
	{
		res = res * 10 + (*p - '0');
		p++;

		while (*p && (*p < '0' || *p > '9'))
		{
			p++;
			if (*p >= '0' && *p <= '9')
				return (sign * res);
		}
	}
	return (sign * res);
}

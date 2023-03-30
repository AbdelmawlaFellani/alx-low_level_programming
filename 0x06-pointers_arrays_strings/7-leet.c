#include "main.h"

/**
 * leet - Converts aeotl into 43071 accordingly
 *
 * @m: pointer to a string we want to convert
 *
 * Return: returns the Result string after the convert
 */
char *leet(char *m)
{	
	char *str = m, *a = "aeotlAEOTL",  *c = "4307143071";
	char *pa, *pc;

	while (*str)
	{
		pa = a;
		pc = c;
		while (*pa)
		{
			if (*str == *pa)
			{
				*str = *pc;
				break;
			}
			pa++;
			pc++;
		}
		str++;
	}
	return (m);
}

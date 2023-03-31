#include "main.h"


/**
 * infinite_add - adds two numbers.
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *p1 = n1, *p2 = n2, *pr = r, tmp;
	int carry, sum, len1 = 0, len2 = 0;

	while (*p1)
	{
		p1++, len1++;
	}
	while (*p2)
	{
		p2++, len2++;
	}
	carry = 0;
	p1--, p2--;
	while (len1 > 0 || len2 > 0 || carry > 0 || pr - r < size_r - 1)
	{
		sum = carry;
		if (len1 > 0)
		{
			sum += (*p1 - '0'), p1--, len1--;
		}
		if (len2 > 0)
		{
			sum += (*p2 - '0'), p2--, len2--;
		}
		*pr = (sum % 10) + '0', pr++;
		carry = sum / 10;
	}
	*pr = '\0', p1 = r;
	p2 = pr - 1;
	while (p1 < p2)
	{
		tmp = *p1, *p1 = *p2, *p2 = tmp;
		p1++, p2--;
	}
	if (pr - r > size_r - 1)
		return (0);
	return (r);
}

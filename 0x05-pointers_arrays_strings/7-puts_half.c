#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str : the string provided
 *
 * Return : void
 */
void puts_half(char *str)
{
	int i = 0, j;
	char *p = str;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
		j = i / 2;

	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}

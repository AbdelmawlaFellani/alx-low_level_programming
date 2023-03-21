#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'Prints the String _putchar using the putchar prototype'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "rahctup_";
	int l = strlen(str);

	while (l > 0)
	{
		_putchar(str[l - 1]);
		l--;
	}
	_putchar('\n');
	return (0);
}

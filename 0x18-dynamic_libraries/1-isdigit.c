#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: Input to check
 *
 * Return: 1 if input is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

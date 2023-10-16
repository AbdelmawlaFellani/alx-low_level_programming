#include "main.h"

/**
 * _islower - Checks if a character is lowercase or not
 *
 * @c: is the character code ascii provided
 *
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

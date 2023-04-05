#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y.
 *
 * @x : the value of the number
 *
 * @y : the value of the power
 *
 * Return: result of x raised by power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

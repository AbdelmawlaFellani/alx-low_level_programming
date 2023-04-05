#include "main.h"

/**
 * sqrt_h - is a sqrt helper function
 *
 * @n: is the number to calculate it's square root
 * @i: is a counter that get incremented by recursion
 *
 * Return: the Square root of @n
 */
int sqrt_h(int n, int i)
{
	if (i * i == n)
		return (n);
	else
	{
		if (i * i > n)
			return (-1);
		else
			return (sqrt_h(n, i + 1));
	}

}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n : number
 *
 * Return: square root of number @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return sqrt_h(n, 0);
}

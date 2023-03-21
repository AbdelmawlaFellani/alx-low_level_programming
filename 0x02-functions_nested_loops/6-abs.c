#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: the integer we gonna fix his sign to positive
 *
 * Return: int a positive value of our parametre
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

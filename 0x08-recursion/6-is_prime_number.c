#include "main.h"

/**
 * prime_h - a helper function for is_prime_number function
 *
 * @n: the number input provided
 * @i: a number that gonna increment and gonne be tested by dividing @n by it
 * @c: is a counter that gonna check if that number has
 *  more than 1 divider except himself.
 *
 *  Return: either 1 if prime or 0 if not.
 */
int prime_h(int n, int i, int c)
{
	if (i > n / 2)
	{
		if (c == 1)
			return (1);
		else
			return (0);
	}
	if (n % i == 0)
		return (prime_h(n, i + 1, c + 1));
	else
		return (prime_h(n, i + 1, c));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 *  otherwise return 0.
 *
 *  @n : number input
 *
 *  Return:  returns 1 if the input integer
 * is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_h(n, 1, 0));

}

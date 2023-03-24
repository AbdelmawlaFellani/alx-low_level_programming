#include <stdio.h>

/**
 * last_factor - Gets the last prime Factor of a number
 *
 * @n: the Input we want to get his prime factors
 *
 * Return: the value of the last prime factor of a number
 */
int last_factor(long int n)
{
	int lastf = 0, i;

	while (n % 2 == 0)
	{
		lastf = 2;
		n = n / 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			lastf = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		lastf = n;
	}
	return (lastf);
}


/**
 * main - Entry point
 *
 * Description: a program that prints the highest prime factor of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%lu\n", last_factor(612852475143));
	return (0);
}

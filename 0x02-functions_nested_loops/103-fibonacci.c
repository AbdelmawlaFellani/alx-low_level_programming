#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : printing the sum of the even numbers on fibb
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int t1 = 0, t2 = 1, n, sum = 0;

	while (n < 4000000)
	{
		n = t1 + t2;
		t1 = t2;
		t2 = n;
		if (n % 2 == 0)
		{
			sum += n;
		}
	}
	printf("%ld ", sum);
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int t1 = 1, t2 = 2, n;
	int i;

	printf("%ld, %ld, ", t1, t2);
	for (i = 3; i <= 98; ++i)
	{
		n = t1 + t2;
		t1 = t2;
		t2 = n;
		printf("%ld", n);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

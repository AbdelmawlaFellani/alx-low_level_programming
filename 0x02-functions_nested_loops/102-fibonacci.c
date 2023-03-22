#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers,starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int t1 = 1, t2 = 2, n;
	int i;

	printf("%ld, %ld, ", t1, t2);
	for (i = 3; i <= 50; ++i)
	{
		n = t1 + t2;
		printf("%ld", n);
		t1 = t2;
		t2 = n;
		if (i != 50)
			printf(", ");

	}
	printf("\n");
	return (0);
}

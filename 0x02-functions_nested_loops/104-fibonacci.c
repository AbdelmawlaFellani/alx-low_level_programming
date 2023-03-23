#include <stdio.h>
#define MAX 10000000000

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long t1 = 1, t2 = 2, ne1 = 0, ne2 = 0;
	unsigned long pack1, pack2, pack3;
	int i;

	printf("%lu, %lu", t1, t2);
	for (i = 3; i <= 98; ++i)
	{
		if (t1 + t2 > MAX || ne2 > 0 || ne1 > 0)
		{
			pack1 = (t1 + t2) / MAX;
			pack2 = (t1 + t2) % MAX;
			pack3 = ne2 + ne1 + pack1;

			ne1 = ne2;
			ne2 = pack3;

			t1 = t2;
			t2 = pack2;

			printf(", %lu%010lu", ne2, t2);
		}
		else
		{
			pack2 = t1 + t2;
			t1 = t2;
			t2 = pack2;
			printf(", %lu", t2);
		}
	}
	printf("\n");
	return (0);
}

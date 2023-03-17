#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int lastDigit(int n)
{
	return (n % 10);
}

int main(void)
{
	int n;
	int last_D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_D = lastDigit(n);
	printf("Last digit of %d ",last_D);
	if(last_D > 5)
	printf("and is greater than 5\n");
	else if (last_D == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	
	return (0);
}

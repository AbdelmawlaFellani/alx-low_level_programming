#include "main.h"
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int change[] = {25, 10, 5, 2, 1}, count = 0, k = 0;
	int amount = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while(k <= 4 && amount > 0)
	{
		if (amount >= change[k])
		{
			amount -= change[k];
			count++;
		}
		else
			k++;
	}
	printf("%d\n",count);
	return (0);
}

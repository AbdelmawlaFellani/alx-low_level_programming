#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * @ac: Argument Counter
 * @av: Argument Vector
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int bytes, i;
	char *arr;
	/* Checks the case if the number of arguments is correct or not */
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	bytes = atoi(av[1]); /* Args are strings we convert them to integers */
	/* Checks if the number of bytes is negative */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	while (i < bytes)
	{
		if (i == (bytes - 1))
		{
			printf("%02hhx\n",arr[i]);
			break;
		}
		printf("%02hhx\n",arr[i]);
		i++;
	}
	return (0);
}

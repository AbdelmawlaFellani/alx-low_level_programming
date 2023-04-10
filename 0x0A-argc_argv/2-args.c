#include "main.h"

/**
 * main - Entry Point
 *
 * @argc: arguments counter
 * @argv: arguments victor
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

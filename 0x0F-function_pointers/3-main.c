#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char op;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	fp = get_op_func(argv[2]);

	if (fp)
	{
		printf("%d\n", get_op_func(argv[2])(n1, n2));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (0);
}

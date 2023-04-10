#include "main.h"

int _atoi(char *s);

/**
 * main - Entry Point
 *
 * @argc: arguments counter
 * @argv: argument vector
 *
 * return: 0 when Success and 1 when Error
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, j, k = 1;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	while (k < argc)
	{
		if(_atoi(argv[k]) >= 0)
			sum += _atoi(argv[k]);
		k++;
	}


	printf("%d\n", sum);
	return (0);
}

/**
 * _atoi - convert a string to an integer
 *
 * @s: the String that gonna get converted
 *
 * Return: void
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	const char *p = s;

	while (*p && (*p < '0' || *p > '9'))
	{
		if (*p == '-')
			sign *= -1;
		p++;
	}

	while (*p >= '0' && *p <= '9')
	{
		res = res * 10 + (*p - '0');
		p++;

		if (res > 214748364 || (res == 214748364 && *p > '7'))
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483648);
			}
		}
		while (*p && (*p < '0' || *p > '9'))
		{
			p++;
			if (*p >= '0' && *p <= '9')
				return (sign * res);
		}
	}
	return (sign * res);
}

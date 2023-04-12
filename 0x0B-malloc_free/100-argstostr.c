#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments counter
 * @av: arguments vector
 *
 * Return: pointer to a new string, NULL if fails or ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	str = malloc(sizeof(char) * len + (ac + 1));
	
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}

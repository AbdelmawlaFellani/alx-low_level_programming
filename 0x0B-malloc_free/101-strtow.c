#include "main.h"

/**
 * strtow - splits a string into words.
 *
 * @str: String input
 *
 * Return: pointer to an array of strings (words),
 * NULL in case str is empty or NULL
 */
char **strtow(char *str)
{
	int i, j, len = 0, wc = 0;
	char *newStr;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	i = 0;
	while (*(str + len))
	{
		if (*(str + len) != ' ' && (*(str + len + 1) == ' ' || *(str + len + 1) == '\0'))
                        wc++;
		len++;

	}
	newStr = malloc(sizeof(char) * (len + wc));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			*(newStr + j) = str[i];
			j++;
		}
		else if (j > 0)
		{
			*(newStr + i) = '\n';
			j++;
		}
		i++;
	}
	*(newStr + j) = '\0';

	words = malloc(sizeof(char *));
	if (words == NULL)
	{
		free(newStr);
		return (NULL);
	}
	*words = newStr;
	return (words);
}

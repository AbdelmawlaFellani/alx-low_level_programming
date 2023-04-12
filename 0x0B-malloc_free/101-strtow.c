#include "main.h"

/**
 * total_length - counts total length of each word in a given string
 * @str: the string to count from
 * Return: the total length
 */
int total_length(char *str)
{
	int total_len = 0, word_len = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			total_len += word_len;
			word_len = 0;
		}
		else
			word_len++;
	}
	total_len += word_len;

	return (total_len);
}

/**
 * count_words - counts words in a given string
 * @str: the string to count words from
 * Return: the number of words
 */

int count_words(char *str)
{
	int wc = 0;
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) != ' ' && (*(str + i + 1) == ' '
			|| *(str + i + 1) == '\0'))
			wc++;
		i++;

	}
	return (wc);
}

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
	int i = 0, j = 0, len = 0, wc = 0;
	char *newStr, **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = count_words(str);
	len = total_length(str);
	newStr = malloc(sizeof(char) * len);
	if (newStr == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			*(newStr + j) = str[i];
			j++;
		}
		else if (i > 0 && *(str + i - 1) != ' ')
		{
			*(newStr + j) = '\n';
			j++;
		}
		i++;
	}
	if (*(newStr + j - 1) == '\n')
		*(newStr + j - 1) = '\0';
	else
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

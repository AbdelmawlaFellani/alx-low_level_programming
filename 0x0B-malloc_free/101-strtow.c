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
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (dest[i])
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/**
 * count_words - counts words in a given string
 * @str: the string to count words from
 * Return: the number of words
 */

int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	if (count == 0 && _strlen(str) == 1 && str[0] == ' ')
		count = 0;
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split
 * Return: the pointer to an array containing words.
 */

char **strtow(char *str)
{
	int wc, wl, i = 0, j = 0;
	int start,end;
	char *word,**words;

	if (str == NULL || _strlen(str) == 0 || count_words(str) == 0)
		return (NULL);
	wc = count_words(str);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	while (str[i] != '\0' && j < wc)
	{
		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		end = i;
		wl = end - start;
		if (wl > 0)
		{
			word = malloc(sizeof(char) * (wl + 1));
			if (word == NULL)
				return (NULL);
			_strncpy(word, str + start, wl);
			word[wl] = '\0';
			words[j] = word;
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

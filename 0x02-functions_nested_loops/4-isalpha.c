#include "main.h"

/**
 * _isalpha - Checks if the entry is Alphabets
 *
 * @c : the ascii code of the character provided
 *
 * Return: 1 if alphabets (lowercase , Uppercase) and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)|| (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

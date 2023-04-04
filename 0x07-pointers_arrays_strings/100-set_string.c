#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s : double pointer to the string to be set.
 * @to :pointer to the char to set the string to.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	if (s != NULL)
		*s = to;
}

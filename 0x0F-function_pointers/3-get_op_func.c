#include "3-calc.h"

/**
 * get_op_func - function pointer to select the correct function
 * to perform the operation asked by the user.
 *
 * @s: A pointer to a null-terminated string that determines the function to be
 * returned. Must not be NULL. The operator.
 *
 * Return: NULL in case @s doesn't match any of the expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}

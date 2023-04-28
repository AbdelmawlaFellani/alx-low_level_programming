#include <stdio.h>

/**
 * first - prints A whole String before main function
 *
 * Return: void
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

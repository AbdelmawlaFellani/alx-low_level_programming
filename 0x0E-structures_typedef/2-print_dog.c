#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n",
			d->name ? d->name : "(nil)",
			d->age,
			d->owner ? d->owner : "(nil)");
}

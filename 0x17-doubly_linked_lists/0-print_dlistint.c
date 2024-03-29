#include "lists.h"

/**
 * print_dlistint - printing data from doubly linked list
 *
 * @h: the head of the doubly linked list
 *
 * Return: the size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	if (!curr)
		return (0);

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}
	return (count);
}

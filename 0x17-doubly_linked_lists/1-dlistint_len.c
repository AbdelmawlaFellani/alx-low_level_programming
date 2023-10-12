#include "lists.h"
/**
 * dlistint_len - computing the length of a double linked list
 *
 * @h: the head
 *
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	if (!curr)
		return (0);

	while (curr)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

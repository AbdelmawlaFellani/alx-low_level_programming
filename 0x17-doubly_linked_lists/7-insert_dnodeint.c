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
/**
 * insert_dnodeint_at_index - Inserts a new node with data at a specific index
 *
 * @h: A pointer to a pointer to the head of the doubly linked list
 * @idx: The index at which to insert the new node
 * @n: The data for the new node
 *
 * Return: A pointer to the newly inserted node
 * or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *curr, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (h == NULL || idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	curr = *h;

	while (curr && index < idx)
	{
		if (index == idx - 1)
		{
			new->n = n;
			new->prev = curr;
			new->next = curr->next;
			if (curr->next)
				curr->next->prev = new;
			curr->next = new;
		}
		index++;
		curr = curr->next;
	}

	return (new);
}

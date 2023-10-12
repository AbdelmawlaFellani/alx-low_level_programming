#include "lists.h"
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
	dlistint_t *curr = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	while (curr && index < idx)
	{
		if (index == idx - 1)
		{
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

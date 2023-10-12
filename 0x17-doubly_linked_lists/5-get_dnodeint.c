#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves a node at index
 *
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *curr = head;

	if (!head)
		return (NULL);

	while (curr)
	{
		if (idx == index)
			return (curr);

		curr = curr->next;
		idx++;
	}
	return (NULL);
}

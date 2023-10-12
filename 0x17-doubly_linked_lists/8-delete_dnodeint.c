#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a specific index
 *
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted,
 * -1 if the deletion failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *curr = *head, *next;

	if (!curr)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr && idx < index)
	{
		if (idx == index - 1)
		{
			if (curr->next)
			{
				next = curr->next->next;
				if (next)
					next->prev = curr;
				free(curr->next);
				curr->next = next;
				return (1);
			}
			else
				return (-1);
		}
		idx++;
		curr = curr->next;
	}
	return (-1);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list
 *
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *curr , *prev;

	if (!head || !*head)
		return (-1);

	curr = *head;
	prev = NULL;

	while (curr && idx < index)
	{
		idx++;
		prev = curr;
		curr = curr->next;
	}

	if (!curr)
		return (-1);

	if (!prev)
		*head = curr->next;
	else
		prev->next = curr->next;

	curr->next = NULL;
	free(curr);

	return (1);
}

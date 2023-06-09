#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the first node in the linked list
 * @idx: the index of the node where we should add the new node
 * @n: the integer value to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new, *curr, *prev;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	prev = NULL;
	curr = *head;

	while (curr && index < idx)
	{
		index++;
		prev = curr;
		curr = curr->next;
	}

	if (idx == index)
	{
		prev->next = new;
		new->next = curr;
		return (new);
	}
	free(new);
	return (NULL);
}

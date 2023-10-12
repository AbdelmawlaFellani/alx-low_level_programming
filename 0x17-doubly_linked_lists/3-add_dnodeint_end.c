#include "lists.h"
/**
 * add_dnodeint_end - adding a node at the end of list
 *
 * @head: the head of the doubly linked list
 * @n: the data
 *
 * Return: a pointer to the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next)
	{
		curr = curr->next;
	}

	curr->next = new;
	new->prev = curr;
	return (new);
}

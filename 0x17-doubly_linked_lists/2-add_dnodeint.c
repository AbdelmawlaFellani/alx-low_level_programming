#include "lists.h"
/**
 * add_dnodeint - adding a node at the beginning of list
 *
 * @head: the head
 * @n: the data
 *
 * Return: a pointer to the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the first node of the linked list
 * @n: is the integer input to get inside the node
 *
 * Return: the address of the element added AKA first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *np;

	np = malloc(sizeof(listint_t));

	if (!np)
		return (NULL);

	np->n = n;
	np->next = NULL;

	if (*head == NULL)
		*head = np;
	else
	{
		np->next = *head;
		*head = np;
	}
	return (np);
}

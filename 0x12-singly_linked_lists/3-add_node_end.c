#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to the first node
 * @str: the String Input we want to duplicate inside the linked list
 *
 * Return: the address of the new Element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
	return (new);
}

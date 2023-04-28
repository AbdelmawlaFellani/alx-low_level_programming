#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
                return (NULL);
	}
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

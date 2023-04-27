#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: singly linked list node structure Input
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			nodeCount++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			nodeCount++;
		}
		h = h->next;
	}
	return (nodeCount);
}

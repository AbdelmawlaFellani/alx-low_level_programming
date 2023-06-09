#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: pointer to the head node of the linked list
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t elemCount = 0;

	while (h != NULL)
	{
		elemCount++;
		h = h->next;
	}
	return (elemCount);
}

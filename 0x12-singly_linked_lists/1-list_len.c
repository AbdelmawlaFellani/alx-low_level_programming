#include "lists.h"
#include <stdio.h>

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

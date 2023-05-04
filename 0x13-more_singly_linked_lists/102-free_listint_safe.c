#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers safely
 *
 * @h: Pointer to the first node of the linked list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h;
	listint_t *next;
	int diff;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (curr)
	{
		diff = curr - curr->next; /* calculates the diff of adresses */
		/* normally it should be positive but negative on loop case*/
		if (diff > 0)
		{
			next = curr->next;
			free(curr);
			curr = next;
			count++;
		}
		else
		{
			free(curr);
			curr = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}

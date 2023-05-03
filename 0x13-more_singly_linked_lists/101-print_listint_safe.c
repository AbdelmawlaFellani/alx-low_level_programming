#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers with a loop safely.
 *
 * @head: Pointer to the first node of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr_node = NULL;
	const listint_t *prev_node = NULL;
	size_t count_node = 0;
	size_t count_prev;

	curr_node = head;

	while (curr_node)
	{
		printf("[%p] %d\n", (void *)curr_node, curr_node->n);
		count_node++;
		curr_node = curr_node->next;
		prev_node = head; /* starts from the head of the linked list */
		count_prev = 0;
		while (count_prev < count_node) /* iterates through the previous nodes */
		{
			if (curr_node == prev_node) /* Checks if Address of nodes match */
			{
				printf("-> [%p] %d\n", (void *)curr_node, curr_node->n);
				return (count_node);
			}
			prev_node = prev_node->next; /* Moves to the next previous node */
			count_prev++;
		}
		if (!head) /* Check if head is NULL */
			exit(98);
	}
	return (count_node);
}

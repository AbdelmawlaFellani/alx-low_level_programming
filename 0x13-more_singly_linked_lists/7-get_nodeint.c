#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node on the linked list
 * @index: the index of node we want to return
 *
 * Return: NULL in case of node doesnt exist
 * and returns value of the nth node in case it does exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int countIndex = 0;

	while (head)
	{
		if (index == countIndex)
			return (head);
		head = head->next;
		countIndex++;
	}

	return (NULL);
}

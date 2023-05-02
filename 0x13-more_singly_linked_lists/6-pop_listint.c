#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * @head: pointer to the first node in the linked list
 *
 * Return: either 0 if the list is empty
 * or the value of the element deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}

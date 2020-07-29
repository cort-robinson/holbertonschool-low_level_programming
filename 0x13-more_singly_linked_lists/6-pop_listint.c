#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked
 * list and returns the head node's data.
 * @head: First node of list.
 * Return: Data within head node.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}

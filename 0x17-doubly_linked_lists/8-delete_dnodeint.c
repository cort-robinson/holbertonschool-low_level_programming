#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list.
 * @head: Head of list.
 * @index: Index of the node that should be deleted,
 * starting at 0.
 * Return: 1 if success, -1 if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);

	for (idx = 0; tmp && idx < index; idx++)
		tmp = tmp->next;

	if (!tmp)
		return (-1);

	if (*head == tmp)
		*head = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;
	if (tmp->prev)
		tmp->prev->next = tmp->next;

	free(tmp);

	return (1);
}

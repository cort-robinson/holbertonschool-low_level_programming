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
	unsigned int idx = 0;
	dlistint_t *tmp = *head;

	if (index == 0)
	{
		if (!*head)
			return (-1);
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp)
	{
		if (idx == index)
			break;
		idx++;
		tmp = tmp->next;
	}

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);

	if (tmp)
		return (-1);

	return (1);
}

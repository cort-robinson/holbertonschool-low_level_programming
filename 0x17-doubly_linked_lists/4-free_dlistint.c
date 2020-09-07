#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Head of list.
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
}

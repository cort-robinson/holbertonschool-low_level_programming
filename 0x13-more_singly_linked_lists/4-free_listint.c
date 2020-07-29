#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: First node of list.
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
}

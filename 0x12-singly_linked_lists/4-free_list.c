#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: First node of list_t list.
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
	head = NULL;
}

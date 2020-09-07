#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a
 * dlistint_t linked list.
 * @head: Head of list.
 * @index: Index of node, starting from 0.
 * Return: nth node of list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		idx++;
		head = head->next;
	}
	return (NULL);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position.
 * @h: Head of list.
 * @idx: Index of the lsit where the new node should
 * be added, starting at 0.
 * @n: Number stored in list.
 * Return: Address of new node or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	if (new == NULL)
		return (NULL);

	new->n = n;

	while (tmp)
	{
		if (index == idx)
			break;
		index++;
		tmp = tmp->next;
	}
	new->next = tmp;
	new->prev = tmp->prev;

	tmp->prev->next = new;
	tmp->prev = new;

	return (NULL);
}

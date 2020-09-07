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
	dlistint_t *new;
	dlistint_t *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp)
	{
		if (index == idx - 1)
			break;
		index++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}

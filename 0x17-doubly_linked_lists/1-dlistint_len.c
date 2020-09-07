#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked
 * dlistint_t list.
 * @h: Head of list.
 * Return: Number of elements in list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

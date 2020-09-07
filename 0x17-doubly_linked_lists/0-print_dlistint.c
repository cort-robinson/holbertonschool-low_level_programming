#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: Head of list.
 * Return: Number of nodes in list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_nodes);
}

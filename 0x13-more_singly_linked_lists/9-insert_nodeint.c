#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: First node of list.
 * @idx: Index of the list where the new node should be added.
 * @n: Integer to fill node with.
 * Return: Address of new node or NULL on fail.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *pos, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	pos = *head;
	while (pos->next && i <= idx)
	{
		if (i == idx - 1)
		{
			tmp = pos->next;
			pos->next = new;
			new->next = tmp;
		}
		pos = pos->next;
	}
	return (new);
}

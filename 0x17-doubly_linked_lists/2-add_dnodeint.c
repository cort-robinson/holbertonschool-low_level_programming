#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the
 * beginning of a dlistint_t list.
 * @head: Head of list.
 * @n: Number stored in node.
 * Return: Address of new element or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare new node */
	dlistint_t *new;

	/* create new node */
	new = malloc(sizeof(dlistint_t));

	/* check if malloc failed */
	if (new == NULL)
		return (NULL);

	/* assign values to new node */
	new->next = *head;
	new->prev = (*head)->prev;
	new->n = n;

	/* correct the node structure */
	(*head)->prev->next = new;
	(*head)->prev = new;

	/* return address of new node */
	return (new);
}

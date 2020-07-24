#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: First node of list_t list/
 * @str: String of current node.
 * Return: Address of new element or NULL on fail.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;
	unsigned int size = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next)
		tail = tail->next;
	while (str[size])
		size++;
	new->len = size;
	tail->next = new;
	return (new);
}

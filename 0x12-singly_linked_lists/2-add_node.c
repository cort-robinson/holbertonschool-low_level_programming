#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * of a list_t list.
 * @head: First node in list_t list.
 * @str: String of current node.
 * Return: Address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int size = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[size])
		size++;
	new->len = size;
	new->next = *head;
	*head = new;
	return (new);
}

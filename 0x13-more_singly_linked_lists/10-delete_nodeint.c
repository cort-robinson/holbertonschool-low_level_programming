#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * at index "index" of a linked list.
 * @head: First node of list.
 * @index: Index
 * Return: 1 on success, -1 on fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	temp = *head;
	for (i = 0; temp; i++)
	{
		if (i + 1 == index)
		{
			prev = temp;
			temp = temp->next;
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}

#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in a
 * dlistint_t linked list.
 * @head: Head of list.
 * Return: Sum of data in list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	sum += sum_dlistint(head->next);
	sum += head->n;
	return (sum);
}

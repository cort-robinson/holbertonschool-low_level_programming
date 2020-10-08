#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table to modify.
 * @key: Key to add.
 * @value: Value associated with key.
 *
 * Return: 1 on success, else 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;
	hash_node_t *head;
	hash_node_t *tmp;

	if (key == NULL || ht == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	head = ht->array[idx];
	tmp = head;

	while (tmp->next)
	{
		if (tmp->key == key)
		{
			free(tmp);
			break;
		}
		tmp = tmp->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = head;
	head = new;

	ht->array[idx] = head;

	return (1);
}

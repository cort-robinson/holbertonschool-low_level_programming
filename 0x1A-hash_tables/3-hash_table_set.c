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
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));
	hash_node_t *head = ht->array[idx];

	if (strcmp(key, ""))
		return (0);
	if (new == NULL)
		return (0);
	if (ht == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = head;
	head = new;

	ht->array[idx] = head;

	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of hash table to be created.
 * Return: New hash table of type hash_table_t.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->size = size;

	return (new);
}

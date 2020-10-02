#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of hash table to be created.
 * Return: New hash table of type hash_table_t.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t) * size);

	if (new == NULL)
		return (NULL);

	return (new);
}

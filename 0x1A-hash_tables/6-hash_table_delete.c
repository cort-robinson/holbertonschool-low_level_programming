#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *next;

	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			next = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p = next;
		}
	}
	free(ht->array);
	free(ht);
}

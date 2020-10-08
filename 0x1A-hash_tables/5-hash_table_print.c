#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("%s'%s': '%s'", sep, p->key, p->value);
			p = p->next;
			sep = ", ";
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * key_index - Returns index of key.
 * @key: String to implement in hash.
 * @size: Size of index.
 *
 * Return: Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

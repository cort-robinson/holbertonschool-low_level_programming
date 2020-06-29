#include "holberton.h"

/**
 * _memcpy - Copies n bytes from
 * memory area src to memory area dest.
 * @dest: Mem area to copy to.
 * @src: Mem area to copy from.
 * @n: Bytes of memory area to copy.
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

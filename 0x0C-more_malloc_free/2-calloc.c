#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of array elements.
 * @size: Size of bytes for array elements.
 * Return: Pointer to allocated memory or NULL if nmemb
 * or size are 0 or if _calloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;
	
	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;
	return (ptr);
}

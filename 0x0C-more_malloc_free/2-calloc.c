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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
#include "holberton.h"
#include <stdlib.h>

/**
 * realloc - Reallocates a memory block using malloc and free.
 * @ptr: Original memory block pointer.
 * @old_size: Size of original memory block.
 * @new_size: Size of newly allocated memory block.
 * Return: Void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *ptrtmp = (char *)ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
	{
		ptr2[i] = ptrtmp[i];
	}
	free(ptr);
	return (ptr2);
}

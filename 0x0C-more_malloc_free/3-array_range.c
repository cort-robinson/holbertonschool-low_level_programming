#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum integer in array.
 * @max: Maximum integer in array.
 * Return: Pointer to new array or NULL if min > max
 * or if memory allocation fails.
 */

int *array_range(int min, int max)
{
	int *ptr, i, j, len;

	if (min > max)
		return (NULL);
	len = max - min;
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min, j = 0; i < max; i++, j++)
		ptr[j] = i;
	return (ptr);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 * of integers.
 * @width: Width of array.
 * @height: Height of array.
 * Return: Pointer to array, or NULL if width and/or height
 * are - or negative, or error.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		ptr[i] = (int *) malloc(height * sizeof(int));
	if (ptr == NULL || *ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*ptr[j] = 0;
		}
	}
	return (ptr);
}

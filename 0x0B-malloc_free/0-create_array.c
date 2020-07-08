#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array chars and
 * initialized it with a specific char.
 * @size: Size of the array.
 * @c: Char to initialized array with.
 * Return: NULL if size = 0, pointer to the array or NULL if error.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);

}

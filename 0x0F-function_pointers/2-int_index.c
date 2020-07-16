#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 * @array: Array to search.
 * @size: Number of elements in array.
 * @cmp: Pointer to function used to compare values.
 * Return: index of first element for which cmp
 * does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

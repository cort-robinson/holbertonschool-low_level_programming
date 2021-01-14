#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: Pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search for in array
 * Return: Index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, beg = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (beg <= end)
	{
		printf("Searching in array:");
		for (i = beg; i < end; i++)
			printf(" %i,", array[i]);
		printf(" %i\n", array[end]);
		mid = (beg + end) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			beg = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}

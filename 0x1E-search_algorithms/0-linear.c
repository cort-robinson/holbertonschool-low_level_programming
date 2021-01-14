#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: Pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search for in array
 * Return: First index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
    unsigned int i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%i] = [%i]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

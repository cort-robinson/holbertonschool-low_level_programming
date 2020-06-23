#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Variable int 1.
 * @b: variable int 2.
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int temp_assignment = *a;

	*a = *b;
	*b = temp_assignment;
}

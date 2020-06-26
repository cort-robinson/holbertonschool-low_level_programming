#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array to reverse.
 * @n: Number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n -= 1;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
		i++;
	}
}

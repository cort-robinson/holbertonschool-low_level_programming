#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Matrix of integers.
 * @size: Size of square a.
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += (a + i * size)[i];
		sum2 += (a + i * size)[size - 1 - i];
		i++;
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}

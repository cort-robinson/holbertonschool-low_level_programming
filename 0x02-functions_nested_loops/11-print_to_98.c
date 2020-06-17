#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start with when counting to 98
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}

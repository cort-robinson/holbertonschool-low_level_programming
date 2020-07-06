#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minumum number of coins to make change
 * for an amount of money.
 * @argc: Argument count.
 * @argv: Arguments passed to program.
 * Return: 0 if no errors, else 1.
 */

int main(int argc, char *argv[])
{
	int change = 0, coins = 0;
	int i, j;
	int check_size = 5;
	int check[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < check_size; j++)
	{
		while (change + check[j] <= i)
		{
			change += check[j];
			coins += 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}

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
	int i;

	if (argc <= 2)
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
	while (change + 25 <= i)
	{
		change += 25;
		coins += 1;
	}
	while (change + 10 <= i)
	{
		change += 10;
		coins += 1;
	}
	while (change + 5 <= i)
	{
		change += 5;
		coins += 1;
	}
	while (change + 2 <= i)
	{
		change += 2;
		coins += 1;
	}
	while (change + 1 <= i)
	{
		change += 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}

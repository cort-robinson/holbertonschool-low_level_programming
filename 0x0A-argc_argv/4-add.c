#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Arguments passed to program.
 * Return: 0 if no errors, else 1.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

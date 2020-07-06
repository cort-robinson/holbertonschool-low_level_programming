#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Argument count.
 * @argv: Arguments to program.
 * Return: 0 if no errors, 1 on error.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error: arguments not declared\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

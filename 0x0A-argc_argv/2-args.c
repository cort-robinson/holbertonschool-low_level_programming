#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument values.
 * Return: 0 if no errors.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

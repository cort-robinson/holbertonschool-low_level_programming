#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints 1-100 followed by newline with "Fizz" replacing multiples of 3
 * and "Buzz" replacing multiples of 5. Multiples of both are replaced with
 * "FizzBuzz".
 *
 * Return: 0 if no errors.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

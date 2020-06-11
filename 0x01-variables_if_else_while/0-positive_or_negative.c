#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns random number to n and tells whether number is positive or
 * negative
 *
 * Return: 0 if no errors
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

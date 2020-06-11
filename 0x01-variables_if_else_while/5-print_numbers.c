#include <stdio.h>

/**
 * main - print single digit numbers of base 10 followed by newline
 * Return: 0 if no errors
 **/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}

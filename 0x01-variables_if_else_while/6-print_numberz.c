#include <stdio.h>

/**
 * main - print single digit numbers of base 10 followed by newline
 * Return: 0 if no errors
 **/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}

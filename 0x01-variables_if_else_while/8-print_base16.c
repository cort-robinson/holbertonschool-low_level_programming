#include <stdio.h>

/**
 * main - prints all numbers of base 16 followed by new line
 * Return: 0 if no errors
 **/

int main(void)
{
	int i = 48;
	int h = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (h <= 102)
	{
		putchar(h);
		h++;
	}

	putchar('\n');

	return (0);
}

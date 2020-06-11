#include <stdio.h>

/**
 * main - alphabet backwards followed by newline
 * Return: 0 if no errors
 **/

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}

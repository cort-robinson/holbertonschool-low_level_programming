#include <stdio.h>

/**
 * main - Prints the name of the file its compiled from
 * followed by a new line.
 * Return: 0 if no errors.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

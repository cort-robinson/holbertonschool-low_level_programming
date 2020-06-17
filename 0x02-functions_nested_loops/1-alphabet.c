#include "holberton.h"

/**
 * main - print the alphabet in lowercase followed by newline
 * Return: 0 if no errors
 */

void print_alphabet(void)
{
	int x;

	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: String to print in reverse.
 * Return: Void.
 */

void print_rev(char *s)
{
	int place;

	for (place = 0; s[place] != '\0'; place++)
	{}
	for (; place >= 0; place--)
		_putchar(s[place]);
	_putchar('\n');
}

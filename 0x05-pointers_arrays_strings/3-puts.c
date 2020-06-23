#include "holberton.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: String to be printed.
 * Return: Void.
 */
void _puts(char *str)
{
	int place;

	for (place = 0; str[place] != '\0'; place++)
		_putchar(str[place]);
	_putchar('\n');
}

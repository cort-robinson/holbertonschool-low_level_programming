#include "holberton.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: String to evaluate.
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
	{}
	if (len % 2 == 0)
	{
		for (n = (len / 2); n < len; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = (len - 1) / 2; n < len; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}

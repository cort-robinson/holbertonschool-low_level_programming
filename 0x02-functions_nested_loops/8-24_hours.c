#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar(':');
			_putchar('0' + y / 10);
			_putchar('0' + y % 10);
			_putchar('\n');
		}
	}
}

#include "holberton.h"

/**
 * print_diagonal - draws a straight line in terminal.
 * @n: number of times to print character [\].
 * Return: void.
 */
void print_diagonal(int n)
{
	int print_times, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (print_times = 0; print_times < n; print_times++)
		{
			for (spaces = 0; spaces < print_times; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			spaces = 0;
		}
	}
}

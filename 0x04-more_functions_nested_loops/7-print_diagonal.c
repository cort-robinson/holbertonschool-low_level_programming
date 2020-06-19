#include "holberton.h"

/**
 * print_diagonal - draws a straight line in terminal.
 * @n: number of times to print character [\].
 * Return: void.
 */
void print_diagonal(int n)
{
	int print_times, spaces;

	for (print_times = 0; print_times < n; print_times++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (spaces = 0; spaces < print_times; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			spaces = 0;
		}
	}
}

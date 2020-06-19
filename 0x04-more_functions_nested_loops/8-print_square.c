#include "holberton.h"

/**
 * print_square - prints a square followed by a new line in terminal.
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int lines, pound_signs;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (lines = 0; lines < size; lines++)
		{
			for (pound_signs = 0; pound_signs < size;
			     pound_signs++)
				_putchar('#');
			_putchar('\n');
			pound_signs = 0;
		}
	}
}

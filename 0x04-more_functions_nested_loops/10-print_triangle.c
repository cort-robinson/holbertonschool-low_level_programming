#include "holberton.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: size of triangle.
 * Return: void.
 */
void print_triangle(int size)
{
	int line, spaces, pound_signs;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < size; line++)
		{
			for (spaces = line; spaces < (size - (pound_signs + 1));
			     spaces++)
				_putchar(' ');
			for (pound_signs = 0; pound_signs <= line;
			     pound_signs++)
			{
				_putchar('#');
			}
			_putchar('\n');
			pound_signs = 0;
		}
	}
}

#include "holberton.h"

/**
 * times_table - print the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int row, column, value;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			value = row * column;
			if (value > 9)
			{
				_putchar(' ');
				_putchar('0' + value / 10);
				_putchar('0' + value % 10);
			}
			else
			{
				if (column != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + value);
			}
			if (column != 9)
				_putchar(',');
			if (column == 9)
				_putchar('\n');
		}
		column = 0;
	}
}

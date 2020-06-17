#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the number to be processed by function
 * Return: value of last digit
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		x *= -1;
	}
	x = (x % 10);
	_putchar('0' + x);
	return (x);
}

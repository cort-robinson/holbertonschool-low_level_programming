#include "holberton.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y.
 * @x: Variable to be raised in power.
 * @y: Variable for power that x should be raised to.
 * Return: x to the power of y, or -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return x * _pow_recursion(x, y - 1);
}

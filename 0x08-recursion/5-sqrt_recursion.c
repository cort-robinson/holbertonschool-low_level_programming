#include "holberton.h"

/**
 * helper - Finds the square root of a number.
 * @i: Variable to check and increment.
 * @n: Number to evaluate.
 * Return: Natural square root of n, or -1 if no natural square root.
 */

int helper(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (helper(i + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to evaluate.
 * Return: Natural square root of n, or -1 if no natural square root.
 */

int _sqrt_recursion(int n)
{
	return (helper(0, n));
}

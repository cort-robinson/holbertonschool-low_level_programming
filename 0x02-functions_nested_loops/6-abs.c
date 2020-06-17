#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: the integer to be computed by function
 * Return: absolute value of x
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return(x);
	}
}

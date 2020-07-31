#include "holberton.h"

/**
 * set_bit - Sets the value of bit to 1 at given index.
 * @n: Number to evaluate.
 * @index: Index of bit to set.
 * Return: 1 if success, -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}

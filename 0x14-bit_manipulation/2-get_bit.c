#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at given index.
 * @n: Number to evaluate.
 * @index: Index of the bit to get.
 * Return: Value of bit at index "index" or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}

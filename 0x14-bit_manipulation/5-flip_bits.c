#include "holberton.h"

/**
 * flip_bits - Returns number of bits to flip to get from n to m.
 * @n: Number from.
 * @m: Number to.
 * Return: Number of bits needed to flip for n to equal m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int lastb_n, lastb_m;
	unsigned int count = 0;

	while (n || m)
	{
		lastb_n = n & 1;
		lastb_m = m & 1;
		if (lastb_n != lastb_m)
			count++;
		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}

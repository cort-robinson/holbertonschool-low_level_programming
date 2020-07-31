#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsinged int.
 * @b: Binary string.
 * Return: Converted number or 0 if b invalid.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			num += base;
		base = base * 2;
	}

	return (num);
}

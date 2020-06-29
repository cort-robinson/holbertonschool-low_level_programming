#include "holberton.h"

/**
 * _memset - Fills the first n bytes of the memory area.
 * @s: Points to memory area to be filled.
 * @b: Constant byte to fill memory area with.
 * @n: Bytes of memory area to fill.
 * Return: Pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

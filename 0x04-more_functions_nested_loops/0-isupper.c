#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable to check
 * Return; 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (0);
}

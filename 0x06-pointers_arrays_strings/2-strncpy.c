#include "holberton.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination of string copy.
 * @src: Source of string copy.
 * @n: Number of bytes to copy.
 * Return: Pointer to string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i <= n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

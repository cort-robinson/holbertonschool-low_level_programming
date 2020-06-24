#include "holberton.h"

/**
 * _strcpy - Copies the string pointed to by *src, including the
 * terminating null byte, to the buffer pointed to by dest.
 * @dest: Destination of copied string.
 * @src: String to be copied.
 * Return: Char.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

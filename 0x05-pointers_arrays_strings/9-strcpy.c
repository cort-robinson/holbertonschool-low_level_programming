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
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

#include "holberton.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: String to append to.
 * @src: String to append from.
 * @n: Maximum number of bytes to append from src.
 * Return: Pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len, place, i = 0;

	src_len = _strlen(src);
	dest_len = _strlen(dest);

	for (place = dest_len; place <= dest_len + src_len; place++)
	{
		if (i < n)
			dest[place] = src[i];
		else
			break;
		i++;
	}
	return (dest);
}

/**
 * _strlen - Returns the length of a string.
 * @s: String to be checked for length.
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

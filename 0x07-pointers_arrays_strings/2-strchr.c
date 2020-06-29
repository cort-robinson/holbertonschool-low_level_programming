#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String to look in.
 * @c: Character to look for.
 * Return: Pointer to the first occurrence of c in s
 * or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}

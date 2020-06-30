#include "holberton.h"

/**
 * _strpbrk - Locates the first occurrence in the string
 * s of any of th bytes in the string accept.
 * @s: String to check.
 * @accept: Characters to check for in string.
 * Return: Pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if none.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, check;

	for (i = 0; s[i]; i++)
	{
		for (check = 0; accept[check]; check++)
		{
			if (s[i] == accept[check])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

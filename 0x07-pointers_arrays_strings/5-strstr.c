#include "holberton.h"

/**
 * _strstr - Finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: String to search.
 * @needle: Substring to search for.
 * Return: Pointer to the beginning of the located
 * substring or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, check = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[check])
		{
			while (haystack[i + check] == needle[check])
			{
				check++;
				if (needle[check] == '\0')
				{
					return (haystack + i);
				}
			}
		}
	}
	return (0);
}

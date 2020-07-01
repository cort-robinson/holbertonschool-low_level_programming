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
	int i = 0, check = 0, first;

	while (haystack[i] != '\0')
	{
		while (haystack[i] != needle[0] && haystack[i] != '\0')
			i++;
		if (haystack[i] == '\0')
			return (0);

		first = i;

		while (haystack[i] == needle[check] && haystack[i] != '\0')
		{
			i++;
			check++;
		}

		if (needle[check] == '\0')
			return (haystack + first);
		else if (haystack[i] == '\0')
			return (0);

		i = first + 1;
		check = 0;
	}
	return (0);
}

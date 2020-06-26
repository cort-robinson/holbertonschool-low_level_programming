#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of string to uppercase.
 * @str: String to be evaluated.
 * Return: String with changes.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}

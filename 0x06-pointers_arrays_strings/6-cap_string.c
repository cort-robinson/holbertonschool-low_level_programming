#include "holberton.h"

/**
 * cap_string - Capatalizes all words of a string.
 * @str: String to be changed.
 * Return: Changed string.
 */

char *cap_string(char *str)
{
	int i, sym;
	char seps[] = {' ', '\t', '\n', ',', ';', '.',
		       '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i]; i++)
	{
		for (sym = 0; sym <= 12; sym++)
		{
			while (str[i] == seps[sym])
				i++;
			if (str[i] >= 'a' && str[i] <= 'z' &&
			    str[i - 1] == seps[sym])
				str[i] -= 32;
		}
	}
	return (str);
}

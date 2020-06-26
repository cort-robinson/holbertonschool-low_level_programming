#include "holberton.h"

/**
 * rot13 - Encodes a string to rot13.
 * @str: String to be encoded.
 * Return: Encoded string.
 */

char *rot13(char *str)
{
	int i, check;
	char *first = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *second = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i]; i++)
	{
		for (check = 0; str[check]; check++)
		{
			if (str[i] == first[check])
			{
				str[i] = second[check];
				break;
			}
		}
	}
	return (str);
}

#include "holberton.h"

/**
 * leet - Encodes a string to 1337/leet.
 * @str: String to be encoded.
 * Return: Encoded string.
 */

char *leet(char *str)
{
	int i, check;
	char *ltr = "AaEeOoTtLl";
	char *num = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (check = 0; str[check]; check++)
		{
			if (str[i] == ltr[check])
			{
				str[i] = num[check];
				break;
			}
		}
	}
	return (str);
}

#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to check.
 * @accept: String to check chars from.
 * Return: Number of bytes in the initial segment of
 * s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, check, temp, matches = 0;

	for (i = 0; s[i]; i++)
	{
		temp = matches;
		for (check = 0; accept[check]; check++)
		{
			if (s[i] == accept[check])
			{
				matches++;
			}
		}
		if (temp == matches)
		{
			break;
		}
	}
	return (matches);
}

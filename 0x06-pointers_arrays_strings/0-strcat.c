#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: String to concatenate to.
 * @src: String to concatenate from.
 * Return: A pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int place, len, i;

	for (len = 0; src[len] != '\0'; len++)
	{}
	for (place = 0; dest[place]; place++)
	{}
	for (i = 0; i <= len; i++)
	{
		dest[place] = src[i];
		place++;
	}
	return (dest);
}

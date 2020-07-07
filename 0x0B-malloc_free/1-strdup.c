#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as
 * a parameter.
 * @str: Parameter string.
 * Return: Pointer to duplicated string, or NULL if str = NULL
 * or insuffecient memory available.
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	for (i = 0; str[i]; i++)
	{}

	ptr = (char *) malloc(i * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

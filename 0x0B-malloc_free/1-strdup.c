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
	int i, length;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length]; length++)
		;
	ptr = (char *) malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		ptr[i] = str[i];
	return (ptr);
}

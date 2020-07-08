#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * Return: Pointer to new memory space containing
 * the contents of s1 followed by the contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len]; s1len++)
		;
	for (s2len = 0; s2[s2len]; s2len++)
		;

	ptr = (char *)malloc((s1len + s2len) + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < s1len + s2len)
	{
		if (i < s1len)
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

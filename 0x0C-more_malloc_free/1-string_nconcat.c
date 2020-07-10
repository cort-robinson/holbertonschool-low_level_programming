#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Bytes of s2 to concatenate.
 * Return: Pointer to new string or NULL if program fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1len, s2len, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len]; s1len++)
		;
	for (s2len = 0; s2[s2len]; s2len++)
		;
	if (n < s2len)
		s2len = n;
	len = s1len + s2len;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		ptr[i] = s1[i];
	for (j = 0; i < len && j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

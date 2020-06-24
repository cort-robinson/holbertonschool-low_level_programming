#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: String to reverse.
 */

void rev_string(char *s)
{
	int length, i;
	char *begin, *end, ch;

	begin = s;
	end = s;

	for (length = 0; s[length] != '\0'; length++)
	{}
	for (i = 0; i < length - 1; i++)
		end++;
	for (i = 0; i < length / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		begin++;
		end--;
	}
}

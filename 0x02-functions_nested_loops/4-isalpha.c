#include "holberton.h"

/**
 * _isalpha - checks for alphabetical characters
 * @c: the character for function to check
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

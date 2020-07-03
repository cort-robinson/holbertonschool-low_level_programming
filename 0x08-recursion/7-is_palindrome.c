#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to check.
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{

	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * helper - Returns 1 if string is a palindrome.
 * @s: String to evaluate
 * @i: Incremental checker variable at start of string.
 * @e: End of string.
 * Return: 1 if string is a palindrome and 0 if not.
 */

int helper(char *s, int i, int e)
{
	if (i == e)
		return (1);
	if (s[i] != s[e])
		return (0);
	if (i < e)
		return (helper(s, i + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome.
 * @s: String to evaluate.
 * Return: 1 if string is a palindrome, else 0.
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0)
		return (1);
	return (helper(s, 0, (_strlen_recursion(s) - 1)));
}

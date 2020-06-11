#include <stdio.h>

/**
 * main - print alphabet in lowercase then uppercase followed by newline
 * Return: 0 if no errors
 */

int main(void)
{
	char ch;

	/* this prints alphabet in lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* this print alphabet in uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

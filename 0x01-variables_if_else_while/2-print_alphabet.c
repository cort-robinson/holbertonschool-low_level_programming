#include <stdio.h>

/**
 * main - print alphabet followed by newline
 * Return: 0 if no errors
 **/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

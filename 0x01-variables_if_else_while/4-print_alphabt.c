#include <stdio.h>

/**
 * main - print alphabet except for 'q' and 'e' followed by newline
 * Return: 0 if no errors
 **/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

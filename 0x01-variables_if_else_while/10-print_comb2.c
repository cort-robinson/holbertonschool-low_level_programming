#include <stdio.h>

/**
 * main - prints 00-99 divided by commas
 * Return: 0 if no errors
 **/

int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			if ((y + x) < 114)
			{
				putchar(',');
				putchar(' ');
			}
			if (y == '9')
			{
				y = '0';
				x++;
				break;
			}
			else
			{
				y++;
			}
		}
	}

	putchar('\n');

	return (0);
}

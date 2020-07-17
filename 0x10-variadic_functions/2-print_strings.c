#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @seperator: String to be printed between strings.
 * @n: Number of strings passed to function.
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%s\n", va_arg(strings, char *));
		else
			printf("%s%s", va_arg(strings, char *), seperator);
	}
	va_end(strings);
}

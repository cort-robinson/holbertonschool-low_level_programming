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
	char *str;

	va_start(strings, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(strings);
}

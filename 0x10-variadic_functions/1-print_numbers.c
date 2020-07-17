#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @seperator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (seperator == NULL)
		seperator = "";

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(valist, int));
		else
			printf("%d%s", va_arg(valist, int), seperator);
	}
	va_end(valist);
}

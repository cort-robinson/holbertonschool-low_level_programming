#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to function.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *sep;

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	i = 0;
	va_start(args, format);

	sep = "";
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *ops[j].op)
			{
				printf("%s", sep);
				ops[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

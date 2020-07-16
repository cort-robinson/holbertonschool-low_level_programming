#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: Name to print.
 * @f: Name printing function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}

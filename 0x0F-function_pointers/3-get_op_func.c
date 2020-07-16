#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: Operator passed as argument to the program.
 * Return: Pointer to the function that corresponds to
 * the operater given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

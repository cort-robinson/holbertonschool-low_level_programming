#include "3-calc.h"

/**
 * main - Performs simple math operation.
 * @argc: Number of arguments.
 * @argv: Array of arguments given.
 * Return: 0 if no errors, else 1;
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int), n1, n2, i;
	char ops[] = {"+", "-", "*", "/", "%"};

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	op =  get_op_func(argv[2]);
	for (i = 0; ops[i] ; i++)
	{
		if (op == ops[i])
			break;
	}
	if (!ops[i])
	{
		printf("Error\n");
		exit (99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((op == "/" || op == "%") && n2 == 0)
	{
		printf("Error\n");
		exit (100);
	}
	
	printf("%d\n", op(n1, n2));
	return (0);
}

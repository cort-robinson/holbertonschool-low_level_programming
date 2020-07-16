#include "3-calc.h"

/**
 * main - Performs simple math operation.
 * @argc: Number of arguments.
 * @argv: Array of arguments given.
 * Return: 0 if no errors, else 1;
 */

int main(void)
{
	int (*op)(int, int), n1, n2, argc = 4;
	char *argv[] = {"./a.out", "25", "/", "5"};

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	op =  get_op_func(argv[2]);

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	
	printf("%d\n", op(n1, n2));
	return (0);
}

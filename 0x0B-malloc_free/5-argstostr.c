#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of program.
 * @ac: argc
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, lengthsum;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (lengthsum = 0; i < ac; i++)
	{
		for (j = 0; av[lengthsum][j]; j++)
			;
	}
	ptr = malloc(lengthsum + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
	}
	return (ptr);
}

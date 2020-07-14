#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name of new dog.
 * @age: Age of new dog.
 * @owner: Owner of new dog.
 * Return: Pointer to dog_t doggo.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, namelen, ownerlen;
	char *nptr, *optr;
	dog_t *doggo;

	for (namelen = 0; name[namelen]; namelen++)
		;
	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;
	nptr = malloc(namelen + 1 * sizeof(char));
	if (nptr == NULL)
		return (NULL);
	optr = malloc(ownerlen + 1 * sizeof(char));
	if (optr == NULL)
	{
		free(nptr);
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		free(nptr);
		free(optr);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		nptr[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		optr[i] = owner[i];
	doggo->name = nptr;
	doggo->age = age;
	doggo->owner = optr;
	return (doggo);
}

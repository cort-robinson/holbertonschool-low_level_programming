#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

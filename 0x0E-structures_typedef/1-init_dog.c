#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing variable
 * @d: variable
 * @name: dogs name
 * @age: age
 * @owner: dogs owner
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

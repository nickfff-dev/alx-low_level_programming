#include <stdlib.h>
#include "dog.h"

/**
* init_dog - function that initializes a variable of type struct dog
* @d: a pointer to the memory location of the struct dog
* @name: the property name to initialize
* @age: the property age to initialize
* @owner: the property owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

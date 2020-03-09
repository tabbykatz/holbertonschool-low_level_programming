#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - keeping track of the pups
 * @d: points to dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

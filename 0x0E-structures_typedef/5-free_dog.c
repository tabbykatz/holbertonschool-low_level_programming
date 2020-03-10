#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_dog - freeing the pups
  * @d: doggy
  *
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

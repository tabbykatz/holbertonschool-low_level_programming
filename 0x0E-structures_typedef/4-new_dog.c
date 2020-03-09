#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - malloc new str and copy *str into it
 * @str: the string we copy
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		count++;
	}
	count += 1;
	dest = malloc(count * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = str[i];
	return (dest);
}
/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy_dog;

	puppy_dog = malloc(sizeof(dog_t));
	if (puppy_dog == NULL)
		return (NULL);
	puppy_dog->name = _strdup(name);
	if (puppy_dog->name == NULL)
	{
		free(puppy_dog);
		return (NULL);
	}
	puppy_dog->owner = _strdup(owner);
	if (puppy_dog->owner == NULL)
	{
		free(puppy_dog->name);
		free(puppy_dog);
		return (NULL);
	}
	puppy_dog->age = age;
	return (puppy_dog);
}

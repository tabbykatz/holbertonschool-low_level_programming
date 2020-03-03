#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - malloc new str and copy *str into it
 * @str: the string we copy
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	unsigned int i;
	int count = 0;
	char *dest;

	for (i = 0; str[i]; i++)
	{
		count++;
	}
	dest = malloc(count * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}

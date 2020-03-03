#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: one string
 * @s2: the other
 * Return: pointer to cat string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i;
	unsigned int j;
	int total = 0;

	for (i = 0; s1[i]; i++)
	{
		total++;
	}
	for (i = 0; s2[i]; i++)
	{
		total++;
	}
	total += 1;
	new = malloc(total * sizeof(char));
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		new[i++] = s2[j];
	}
	new[i + 1] = '\0';
	return (new);
}

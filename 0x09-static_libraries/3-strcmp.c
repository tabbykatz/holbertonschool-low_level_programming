#include "holberton.h"
/**
  * _strcmp - a function to compare 2 strings
  * @s1: the first string
  * @s2: the second string
  *
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		break;
	}
	return (*s1 - *s2);
}

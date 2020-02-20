#include "holberton.h"
/**
  * string_toupper - function to capitalize letters in string
  * @s: that's the string
  *
  *
  *
  * Return: char
  */
char *string_toupper(char *s)
{
	char *p = s;

	for (; *s; s++)
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
	}
	return (p);
}

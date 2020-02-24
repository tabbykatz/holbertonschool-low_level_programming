#include "holberton.h"
/**
  * _strchr - locates a character
  * @s: the string we look thru
  * @c: the character we look for
  *
  * Return: a pointer to the char or NULL
  *
  */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
		return (s);
		else
		continue;
	}
	return (0);
}

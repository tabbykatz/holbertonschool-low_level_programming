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
	for (;; ++s)
	{
		if (*s == c || *s == '\0')
		return ((char *)s);
	}
}

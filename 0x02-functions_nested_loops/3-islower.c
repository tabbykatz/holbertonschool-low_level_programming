#include "holberton.h"
/**
  * _islower - perceives whether a character is lower case
  * @c: argument
  * Return: 1 if lower, 0 if other
  */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}

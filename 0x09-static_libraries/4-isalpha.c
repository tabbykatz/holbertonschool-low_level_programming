#include "holberton.h"
/**
  * _isalpha - a function to see if a character is alphabetic
  * @c: argument
  *
  * Return: 1 if a letter, else 0
  */
int _isalpha(int c)
{

if (c >= 65 && c <= 90)
{
	return (1);
}
else if (c >= 97 && c <= 122)
{
	return (1);
}
else
{
	return (0);
}
}


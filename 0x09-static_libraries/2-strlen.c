#include "holberton.h"
/**
  *_strlen - counts and reutns string length
  * @s: that's the string
  *
  * Return: the length
  */
int _strlen(char *s)
{
int counter = 0;
while (*s != 0)
{
	counter++;
	s++;
}
return (counter);
}

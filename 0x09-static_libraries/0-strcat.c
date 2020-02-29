#include "holberton.h"
/**
  * *_strcat - a function to concatenate 2 strings
  * @dest: what we are apprending to
  * @src: the string we are appending from
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
return (begin);
}

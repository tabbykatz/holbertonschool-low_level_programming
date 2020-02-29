#include "holberton.h"
/**
  * _strncpy - a function that copies a string
  * @dest: we copy to
  * @src: we copy from
  * @n: we copy by
  * Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *begin = dest;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (begin);
}

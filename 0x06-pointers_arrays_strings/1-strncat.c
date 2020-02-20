#include "holberton.h"
/**
  * _strncat- a function to cat 2 strings by n
  * @dest: we append to
  * @src: we appends from
  * @n: we append by
  *
  * Return: char *
  */
char *_strncat(char *dest, char *src, int n)
{
	char *begin = dest;

	while (*dest)
		dest++;
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			break;
	}
return (begin);
}

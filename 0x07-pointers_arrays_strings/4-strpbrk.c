#include "holberton.h"
/**
  * _strpbrk - located the first occurence in S if any bytes in accept
  * @s: the string we look for occurrences in
  * @accept: the print we compare against
  *
  * Return: a pointer to the byte or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int i = 0;

	for (; *(s + i); i++)
	{
		j = 0;
		for ( ; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s += i - 1;
				return (s);
			}
			else
				i++;
		}
	}
	return ('\0');
}

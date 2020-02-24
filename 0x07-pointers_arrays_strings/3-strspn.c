#include "holberton.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: the string we look at
  * @accept: the string we compare to
  *
  * Return: unsigned int
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	unsigned int count = 0;

	for (; *s; s++)
	{
		for (j = 0; *accept; j++)
		{
			if (*s == *(accept + j))
			{
				count++;
				s++;
				break;
			}
			else if (*(accept + j) == '\0')
				break;
		}
	}
	return (count);
}

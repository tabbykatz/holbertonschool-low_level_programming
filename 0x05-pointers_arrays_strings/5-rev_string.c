#include "holberton.h"
/**
  * rev_string - reverse a string
  * @s: that's the string
  *
  * Return: void)
  *
  */
void rev_string(char *s)
{
	char *start = s;
	char temp;

	for (; *(s + 1); )
	{
		s++;
	}
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		s--;
		start++;
	}

}

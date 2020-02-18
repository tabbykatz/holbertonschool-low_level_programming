#include "holberton.h"
/**
  * rev_string - reverse a string
  * @: that's the string
  *
  * Return: void)
  *
  */
void rev_string(char *s)
{
char f[1];
int i = 0;
int l = 0;
while (*s)
{
	s++;
	l++;
}
while (l)
{
	s[i] = f[0];
	s[l] = s[i];
	s[i] = f[0];
	l--;
	i++;
}
}

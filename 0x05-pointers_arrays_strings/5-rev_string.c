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
for (;*s;)
{
	s++;
	l++;
}
for (; i <= l; i++)
{
	s[l] = f[0];
	s[l] = s[i];
	s[i] = f[0];
	l--;
	s--;
}
}

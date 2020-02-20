#include "holberton.h"
/**
  *
  *
  *
  *
  */
int _atoi(char *s)
{
	int numerical = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		numerical = numerical * 10 + s[i] - '0';
		return (numerical);
	}
}

#include "holberton.h"
/**
  * rot13 - encode a string with rot13
  * @p: the string
  *
  *
  * Return: rot
  *
  */
char *rot13(char *p)
{
	char *rot = p;
	int i = 0;
	int j = 0;
	char rotvalue1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotvalue2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (p[i])
	{
		for (j = 0; rotvalue1[j]; )
		{
			if (p[i] == rotvalue1[j])
			{
				p[i] = rotvalue2[j];
				i++;
				j = 0;
			}
			j++;
		}
		i++;
	}
	return (rot);
}

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
	int j = 0;
	char rotvalue1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotvalue2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*rot)
	{
		for (j = 0; rotvalue1[j]; j++)
		{
			if (*rot == rotvalue1[j])
			{
				*rot = rotvalue2[j];
				break;
			}
		}
		rot++;
	}
	return (p);
}

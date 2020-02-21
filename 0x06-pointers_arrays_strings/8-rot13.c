#include "holberton.h"
/**
  * rot13 - encode a string with rot13
  * @rot: the string
  *
  *
  * Return: rot
  *
  */
char *rot13(char *rot)
{
	int i = 0;
	int j = 0;
	char *rotvalue = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwzyzabcdefghijklm";

	while (rot[i] != 0)
	{
		for (; j < 52; j++)
		{
			if (rot[i] == rotvalue[j])
			{
				rot[i] = rotvalue[j] + 13;
				i++;
				j = 0;
				break;
			}
		}
	}
	return (rot);
}
